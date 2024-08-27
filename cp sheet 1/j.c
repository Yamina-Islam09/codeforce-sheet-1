#include<stdio.h>
#include<math.h>

int main(){

int m,n;

scanf("%d",&m);
scanf("%d",&n);
 if ((m%n)==0 || (n%m)==0)
    printf("Multiples\n");
 else
    printf("No Multiples\n");


return 0;
}



