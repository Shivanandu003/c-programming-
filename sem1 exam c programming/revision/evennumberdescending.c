#include<stdio.h>
int main(){
    int a ;
    printf("enter the nth tearm");
    scanf("%d",&a);
    int i=a*2;
    while(i>=2){
        if(i%2==0){
            printf("%d\n",i);
        }
        i--;
    }
    return 0;
}