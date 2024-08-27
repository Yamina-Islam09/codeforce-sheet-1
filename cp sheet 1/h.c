#include<stdio.h>
#include<math.h>

int main(){

int m,n;
float fr,o1,o2,o3;
scanf("%d",&m);
scanf("%d",&n);
fr=(float)m/n;

o1=floor(fr);
o2=ceil(fr);
o3=round(fr);



printf("floor %d / %d = %.0f\n",m,n,o1);
printf("ceil %d / %d = %.0f\n",m,n,o2);
printf("round %d / %d = %.0f\n",m,n,o3);


return 0;
}

