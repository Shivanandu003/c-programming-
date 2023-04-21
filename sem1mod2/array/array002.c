#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the number of students");
    scanf("%d",&n);
    int a[n];
    printf("enter the marks of students");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
     for(i=0;i<n;i++){
        sum=sum+a[i];

    }
    printf("sum=%d",sum);
 return 0;
}