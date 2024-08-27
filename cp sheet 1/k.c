#include<stdio.h>
#include<math.h>

int main(){

int m,n,p,mx,mn;

scanf("%d %d",&m,&n);
scanf("%d",&p);
//for max number
if(m>n){
    if(m>p)
        mx=m;
    else
        mx=p;
}
else
{
    if(n>p)
        mx=n;
    else
        mx=p;
}
//for min number
if(m<n){
    if(m<p)
        mn=m;
    else
        mn=p;
}
else
{
    if(n<p)
        mn=n;
    else
        mn=p;
}


printf("%d %d\n",mn,mx);


return 0;
}





