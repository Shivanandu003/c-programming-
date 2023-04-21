#include<stdio.h>
int main(){
    char name[100];
    printf("enter your name");
    scanf("%s",&name);
    int i=1;
    while(i<=10){
        printf("%s\n",name);
         i++;
    }
   
    return 0;
}