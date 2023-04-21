#include<stdio.h>
int main(){
    int a,i;
    printf("enter the number of star to be printed");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("*");
    }
    return 0;
}