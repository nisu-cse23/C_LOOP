#include<stdio.h>
int main(){
    int i,n,fact=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n<0){
        printf(" Factorial of Negative number dosenot exist \n");
    }
    else{

    for(i=1; i<=n; i++){

        fact=fact*i;

    }
    
    printf("The Fctorial of %d is:%d\n",n,fact);
    }
    return 0;

}