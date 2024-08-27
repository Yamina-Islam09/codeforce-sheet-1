#include<stdio.h>

int main()
{
    int a,b,c,n=3;
    scanf("%d %d %d",&a,&b,&c);


    if(a>b){  //1st if
        if(a>c){ //2nd if
            if(b>c){ //3rd if
                printf("%d\n%d\n%d\n",c,b,a);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }

            else{ //3rd else
                printf("%d\n%d\n%d\n",b,c,a);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }

        }
        else{ //2nd else
            printf("%d\n%d\n%d\n",b,a,c);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
    }
    else{  //1st else (a<B)
       if(b>c){
          if(a>c){
            printf("%d\n%d\n%d\n",c,a,b);
            printf("\n%d\n%d\n%d\n",a,b,c);
          }
          else{
            printf("%d\n%d\n%d\n",a,c,b);
            printf("\n%d\n%d\n%d\n",a,b,c);
          }
       }
       else{
         printf("%d\n%d\n%d\n",a,b,c);
         printf("\n%d\n%d\n%d\n",a,b,c);
       }
    }




    return 0;
}


