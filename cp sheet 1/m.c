#include<stdio.h>


int main(){

char a;


scanf("%c",&a);



if(48<=a && a<=57)
    printf("IS DIGIT\n");
if(65<=a && a<=90)
    printf("ALPHA\nIS CAPITAL\n");
if(97<=a && a<=122)
    printf("ALPHA\nIS SMALL\n");





return 0;
}
