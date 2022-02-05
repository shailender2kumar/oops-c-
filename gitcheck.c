#include<stdio.h>
void main()
{
char s[ 30]="sameer";
char a[ ]="saini";
 int count2 =0;
int count1=0;
while(s[count1]!='\0'){
    count1++;

}
while(a[count2]!='\0'){
    count2++;
}
//printf( "\nlength of s :%d",count1);
//printf( "\nlength of a :%d",count2);
for(int i= 0;i<=5;i++){
        s[count1+i]=a[i];
    }
    printf("\nafter concat: %s",s);
}
