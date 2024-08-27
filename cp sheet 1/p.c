
#include<stdio.h>


int main(){

int a,b;

scanf("%d",&a);

b=a/1000;
if(b%2==0)
    printf("EVEN\n");
else
    printf("ODD\n");

/* the value of log 10 base 10 =1
the value of log 10 base 100 =2
the value of log 10 base 1000 =3

log10 base dhoreo solve kra jbe jdi ques e range thik mton deya na thake..like below

Count=log10(Number);
printf("%d\n",Count);
    FirstDigit=Number/pow(10,Count);
    if(FirstDigit%2==0)
        printf("EVEN");
    else
        printf("ODD");

*/


return 0;
}


