#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n*2){
        if(i%2==0){
    sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
return 0;
}