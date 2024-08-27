
#include<stdio.h>


int main(){

char s;
int a,b,out;

scanf("%d %c %d",&a,&s,&b);

if(s=='+'){
   out=a+b;
   printf("%d\n",out);
}
if(s=='-'){
   out=a-b;
   printf("%d\n",out);
}
if(s=='*'){
   out=a*b;
   printf("%d\n",out);
}
if(s=='/'){
   out=a/b;
   printf("%d\n",out);
}
//switch statement diyeo eta kora jai

return 0;
}

