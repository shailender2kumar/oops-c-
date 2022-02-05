#include<stdio.h>
int main()
{
int number;
printf("enter a number\n");
scanf("%d",&number);
if(number<0){
    printf("number is negitive");}
else if(number>0){
    printf("number is positive");
    return 0 ;
}
}