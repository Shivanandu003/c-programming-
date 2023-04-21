#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,sum=0;
    printf("enter the value 0f n 1-5");
    scanf("\n%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1>n2){
        sum=n1;
    }
    else{
        sum=n2;
    }
    if(n3%2==!0){
        sum=sum+n3;
    }
    if(n4%2==!0){
        sum=sum+n4;
    }
    if(n5%2==!0){
        sum=sum+n5;
    }
    printf("sum=%d",sum);
    return 0;
    }