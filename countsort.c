#include<stdio.h>cs
#include<stdlib.h>
#include<limits.h>
void printarray(int *A,int n){
    for(int i = 0;i<n;i++){
        printf("%d",A[i]);
    }  
}
int maximum(int *A,int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
void countsort(int*A,int n){
    int i,j;
    int max = maximum(A,n);
    int*count =(int*)malloc(max+1*sizeof(int));
    for(i =0 ;i<max+1; i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[A[i]]++;
    }
    i=0;
    j=0;
    while(i<=max){
       if(count[i]>0){
           A[j]=i;
           count[i]--;
           j++;
       }
       else{i++;}
    }   
}
void main(){
    int ar[]={2,6,3,4,7};
    printarray(ar,5);
    printf("\n");
    countsort(ar,5);
    printarray(ar,5);
}