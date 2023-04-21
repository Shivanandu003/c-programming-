#include<stdio.h>
int main(){
    int n,x,i=1,prod=1;
    printf("enter the whse generatedtable to be ");
    scanf("%d",&n);
    printf("generated value to the value");
    scanf("%d",&x);
    while (i<=x)
    {
        prod=i*n;
        printf("%d*%d=%d\n",n,i,prod);
        i++;
    }
    return 0;
}