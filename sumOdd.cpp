#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
     

     
     for(i=1;i<=n;i+=2){
        sum+=i;
     }
     printf("The sum from 1 to %d is:%d\n",n,sum);
     return 0;}