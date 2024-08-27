#include<stdio.h>

int main()
{
    int a,b,c,f;
    char d,e;
    scanf("%d %c %d %c %d",&a,&d,&b,&e,&c);
    if(d=='+'){
        f=a+b;
        if(c==f)
            printf("Yes\n");
        else{
            printf("%d\n",f);
        }
    }
    if(d=='-'){
        f=a-b;
        if(c==f)
            printf("Yes\n");
         else{
            printf("%d\n",f);
        }
    }
   if(d=='*'){
        f=a*b;
        if(c==f)
            printf("Yes\n");
         else{
            printf("%d\n",f);
        }
    }

    return 0;
}
