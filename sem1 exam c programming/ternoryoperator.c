#include<stdio.h>
int main(){
    int num,a;
    printf("enter the value");
    scanf("%d",&num);
    a=(num%7==0)?0:1;
    if(a==0){
        printf("the number is divisible by 7");
    }
    else{
        printf("the number is not");
    }
return 0;
}