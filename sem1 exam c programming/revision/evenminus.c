#include<stdio.h>
int main(){
    int a;
    printf("enter the nth tearm");
    scanf("%d",&a);
    int i=1;
    while(i<=a){
        if(i%2==!0){
            printf("%d\t",i);
        }
        else{
            printf("-%d\t",i);
        }
i++;
    }
    return 0;
}
