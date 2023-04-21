#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("enter the number of class");
    scanf("%d",&n);
     printf("enter the number of students");
    scanf("%d",&m);
    int a[n][m];
     printf("enter the marks of students");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
scanf("%d",&a[i][j]);
        }

    }
   
     for(i=0;i<=n-1;i++){
         printf("marks of students are 0f class %d\n:",i+1);
        for(j=0;j<=m-1;j++){
printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
     return 0;
}