import glob,re,collections,sys
R=sys.argv[1]; ok=0; bad=[]; msgs=collections.Counter(); ex={}
for f in glob.glob(R+'/port/fn/*.c'):
    e=open(f+'.err').read()
    if 'error' not in e: ok+=1
    else:
        bad.append(f); m=re.search(r'error: (.*)',e); k=re.sub(r"'[^']*'","'X'",m.group(1))[:80]; msgs[k]+=1; ex.setdefault(k,(f,m.group(1)))
print('compile OK:',ok,'of',ok+len(bad),'(%.1f%%)'%(100.0*ok/(ok+len(bad))))
for k,v in msgs.most_common(10): print(v,k,'|',ex[k][1][:90],'|',ex[k][0].split('/')[-1])
open(R+'/port/failing.txt','w').write('\n'.join(sorted(x.split('/')[-1] for x in bad))+'\n')
