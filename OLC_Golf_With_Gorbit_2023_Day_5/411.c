#define W 60
#define H 20
p[W*H],d[W*H],y,i,s,e,j,k,r,b;main(){char m[W*H];scanf("%s %d %d",m,p,d);for(i=0;i<W*H;i++)(r=m[i]-'0')==*p?s=i:r==*d?e=i:0;*p=0,p[s]=999;while(i)for(i=0,y=0;y<W*H;y++)for(j=-(y/W>0);j<1+(y/W<H-1);j++)for(k=-(y%W>0);k<1+(y%W<W-1);k++)if(j*k==0&&p[b=y+j*W+k]<p[y]-(r=m[y]!='~'?99:1))p[b]=p[y]-r,d[b]=y,i=1;while((e=d[e])!=s)if(m[e]!='O')m[e]='*';for(y=0;y<H;)printf("%.60s\n",m+y++*W);}