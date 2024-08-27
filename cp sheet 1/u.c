#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    int x;
    scanf("%f",&a);
    x=ceil(a);
   if(x==a){
    printf("int %d\n",(int)a);
   }
   else{

    printf("float %d %.3f\n",(int)a,a-(int)a);
   }


    return 0;
}



