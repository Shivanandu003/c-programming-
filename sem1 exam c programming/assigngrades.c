#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade\tA");
    }
      else if(marks>=75&&marks<=89){
        printf("grade\tB");
    }
     else if(marks>=60&&marks<=74){
        printf("grade\tC");
    }
     else if(marks>=36&&marks<=59){
        printf("grade\tD");
    }
    else if(marks<=34){
        printf("fail");
    }
    return 0;
}