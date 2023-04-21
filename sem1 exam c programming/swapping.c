#include<stdio.h>
int main(){
    int a ,b,temp;
    printf("enter the value of a=");
    scanf("%d",&a);
        printf("enter the value of b=");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
        printf("The value of a= %d\n",a);
        printf("The value of b= %d\n",b);
        return 0;
        

}