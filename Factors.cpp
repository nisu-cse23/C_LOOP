#include<stdio.h>
int main(){
    int i,n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Factors of %d is:",n);
   
        for(i=1;i<=n;i++){
            if(n%i==0){
            printf("%d\n",i);
        }
      
    }
    
    return 0;
}