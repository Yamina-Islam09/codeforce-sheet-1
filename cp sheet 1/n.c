#include<stdio.h>


int main(){

char a;
int b;

scanf("%c",&a);

if(a<97){
   b=a+32;
   printf("%c",b);
}
else{
    b=a-32;
   printf("%c",b);
}


// toupper() & tolower() diyeo prb ta solve kra jai
return 0;
}

