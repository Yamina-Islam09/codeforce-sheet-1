#include<stdio.h>
int main(){
int days,months,years;
scanf("%d",&days);

years=days/365;
days=days%365;
months=days/30;
days=days%30;

printf("%d years\n",years);
printf("%d months\n",months);
printf("%d days\n",days);

return 0;
}

/*year=days/365;                      //400/365=1 year
    month=(days%365)/30;              //400%365=35days/30=1 month
    days=((days%365)%30)/1;*/       //5/1=5days
