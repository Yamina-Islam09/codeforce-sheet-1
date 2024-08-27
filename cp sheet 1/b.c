#include<stdio.h>
int main(){
int numb;
long long lnumb;
char ch[10];
 float fr;
double dfr;

scanf("%d",&numb);
scanf("%lld",&lnumb);
scanf("%s",&ch);
scanf("%f",&fr);
scanf("%lf",&dfr);

printf("%d\n",numb);
printf("%lld\n",lnumb);
printf("%s\n",ch);
printf("%.2f\n",fr);
printf("%.1lf\n",dfr);



return 0;
}
