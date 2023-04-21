#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number of students");
    scanf("%d",&n);
    int a[n];
    printf("enter the marks of students");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
     for(i=0;i<n;i++){
        printf("mark of student%d:%d\n",i+1,a[i]);

    }
 return 0;
}