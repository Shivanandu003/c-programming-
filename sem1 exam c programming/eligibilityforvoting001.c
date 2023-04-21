#include<stdio.h>
int main(){
    int a;
    char c[25];
    printf("enter the age:");
    scanf("%d",&a);
    printf("enter the country:");
    scanf("%d",&c);
    if(strcmp(c,"india")&&a>=18){
        printf("you are eligible");
    }
   else if(strcmp(c,"srilanka")&&a>=21){
        printf("you are eligible");
    }
    else if(strcmp(c,"bangladesh")&&a>=20){
        printf("you are eligible");
    }
    else if(strcmp(c,"nephal")&&a>=25){
        printf("you are eligible");
    }
    else{
        printf("you are not eligible");
    }
return 0;
}