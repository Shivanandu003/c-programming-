#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    while (i<=n*2)
    {
        if(i%2==!0){
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
    
}