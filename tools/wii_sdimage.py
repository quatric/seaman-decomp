#!/usr/bin/env python3
"""Build a FAT32 SD card image for the Wii port: /seaman/{disc.head,disc.map,disc/...}. ADXPACK.AFS (925 MB of audio) is skipped unless --full.
usage: wii_sdimage.py <root> <out.img> [--full]"""
import os, subprocess, sys, shutil, re
R, out = sys.argv[1], sys.argv[2]; full = '--full' in sys.argv
size_mb = 1100 if full else 160
subprocess.check_call(['rm', '-f', out]); subprocess.check_call(['truncate', '-s', '%dm' % size_mb, out])
dev = subprocess.check_output(['hdiutil', 'attach', '-imagekey', 'diskimage-class=CRawDiskImage', '-nomount', out]).decode().split()[0]
try: subprocess.check_call(['newfs_msdos', '-F', '32', '-v', 'SEAMAN', dev], stdout=subprocess.DEVNULL)
finally: subprocess.call(['hdiutil', 'detach', dev], stdout=subprocess.DEVNULL)
info = subprocess.check_output(['hdiutil', 'attach', '-imagekey', 'diskimage-class=CRawDiskImage', '-nobrowse', out]).decode()
mnt = [l.split('\t')[-1].strip() for l in info.splitlines() if '/Volumes/' in l][-1]
try:
    base = os.path.join(mnt, 'seaman'); os.makedirs(base)
    shutil.copy(os.path.join(R, 'port/disc.head'), base)
    lines = []
    for l in open(os.path.join(R, 'port/disc.map')):
        a, b, p = l.rstrip('\n').split(' ', 2)
        rel = os.path.relpath(p, os.path.join(R, 'disc'))
        if os.path.basename(rel) == 'ADXPACK.AFS' and not full: continue
        dst = os.path.join(base, 'disc', rel); os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copy(p, dst)
        lines.append('%s %s sd:/seaman/disc/%s\n' % (a, b, rel))
    open(os.path.join(base, 'disc.map'), 'w').write(''.join(lines))
    print(len(lines), 'files copied to', base)
finally:
    subprocess.call(['hdiutil', 'detach', mnt], stdout=subprocess.DEVNULL)
