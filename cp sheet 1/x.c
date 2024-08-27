#include<stdio.h>
int main()
{
    int l1,R1,l2,R2;
    scanf("%d %d %d %d",&l1,&R1,&l2,&R2);
    if(l2>=l1 && l2<=R1 ){ //l2 jdi l1,r1 er majhe thake
        if(R2>=R1)
            printf("%d %d",l2,R1);
        else if(R1>=R2)
            printf("%d %d",l2,R2);
    }
    else if(l1>=l2 && l1<=R2){ //l1 jdi r2,l2 er majhe thake
        if(R2>=R1)
            printf("%d %d",l1,R1);
        else if(R1>=R2)
            printf("%d %d",l1,R2);
    }
    else
       printf("-1\n");

    return 0;



}

