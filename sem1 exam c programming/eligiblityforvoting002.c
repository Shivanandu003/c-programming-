#include<stdio.h>
#include<string.h>
char main(){
    int age;
    char cou[100];
    printf("enter age:");
    scanf("%d",&age);
    printf("enter the country:");
    scanf("%s",&cou);
    if(
    (strcmp(cou,"India")     ==0&&age>=18)||
    (strcmp(cou,"Srilankha") ==0&&age>=21)||
    (strcmp(cou,"Nephal")    ==0&&age>=25)||
    (strcmp(cou,"Bangladesh")==0&&age>=20)
    ){

        printf("eligible");
    }
    else{
        printf("not eligible");
    }
    return 0;
}