# Credits: moon_president

c={}
z=[]
b=1
l=2
d=a=r=x=y=0
exec("c[y]=c.get(y,[])+[x];z+=[x];y-=d;x+=b;a+=1\nif a==l:a=0;l+=2*r;b,d=-d,b;r^=1\n"*int(input()))
for j in sorted(c):print(*[' #'[i in c[j]]for i in range(min(z),max(z)+1)],sep='')