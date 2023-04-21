#include<stdio.h>
int main(){
    int a,i,count;
    printf("enter the nth tearm");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
          count++; 
        }
    }
     printf("%d\t",count);
    return 0;
}