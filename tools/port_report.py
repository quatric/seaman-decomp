import glob,re,collections,sys
R=sys.argv[1]; sys.path.insert(0, R + '/tools'); import units
ok=0; bad=set(); msgs=collections.Counter(); ex={}
for f in units.region_files(R+'/port/fn', 'c'):
    t=open(f).read(); e=open(f+'.err').read() if glob.glob(f+'.err') else ''
    seen=set()
    for m in re.finditer(r'^\S+?:(\d+):\d+: error: (.*)$', e, re.M):
        u=units.line_unit(t, int(m.group(1)))
        if u in seen: continue
        seen.add(u); k=re.sub(r"'[^']*'","'X'",m.group(2))[:80]; msgs[k]+=1; ex.setdefault(k,(u,m.group(2)))
    n=len(units.split(t)); bad|=seen; ok+=n-len(seen)
print('compile OK:',ok,'of',ok+len(bad),'(%.1f%%)'%(100.0*ok/max(1,ok+len(bad))))
for k,v in msgs.most_common(10): print(v,k,'|',ex[k][1][:90],'|',ex[k][0])
open(R+'/port/failing.txt','w').write(''.join(sorted('%s.c\n' % u for u in bad if u)))
