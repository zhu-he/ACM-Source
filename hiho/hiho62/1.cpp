#include<cstdio>
const int m=1e8;int l[m],a[m],M,s,t,c,i=1;int main(){scanf("%d%d ",a,&M);while(i++<=*a){while((c=getchar())!='\n')a[i]=(a[i]*103LL+c)%m;if(l[a[i]]>s)puts("Cache");else{if(++t>M)s++;puts("Internet");}l[a[i]]=i;while(l[a[s]]!=s)s++;}return 0;}