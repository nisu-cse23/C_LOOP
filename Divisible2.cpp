#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=101;i<199;i++){
        if(i%7==0){
            sum+=i;
        }
    }
    printf("The sum of the series:%d\n",sum);
    return 0;
}