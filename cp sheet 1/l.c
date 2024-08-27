#include<stdio.h>
#include<string.h>

int main(){

char a[255],b[255],c[255],d[255];
int x;

scanf("%s %s %s %s",&a,&b,&c,&d);


x=strcmp(b,d);
if(x==0)
    printf("ARE Brothers\n");
else
    printf("NOT\n");




return 0;
}

