w=60,h=20,m[1200],p[12];main(b,e,i,x,y,s,t,n){for(i=0;i<1200;i++)scanf("%c",m+i),m[i]>=49&&m[i]<=56?p[m[i]-49]=i:0;scanf("%d %d", &b, &e);x=p[--e]%w-p[--b]%w;y=p[e]/w-p[b]/w;s=p[b]%w;t=p[b]/w;b=abs(x);e=abs(y);if(b>e)for(n=x/b,i=1;i<b;i++)m[s+i*n+(t+y*i/b)*w]='*';else for(n=y/e,i=1;i<e;i++)m[s+x*i/e+(t+i*n)*w]='*';for(y=0;y<h;y++,puts(""))for(x=0;x<w;x++)putchar(m[x+y*w]);}