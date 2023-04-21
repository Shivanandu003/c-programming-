#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("enter num of rows of two matrix");
    scanf("%d",&n);
     printf("enter num of columsof two matrix");
    scanf("%d",&m);
    int a[n][m],b[n][m],c[n][m];
    printf("enter the elements in matrix a");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements in matrix a");
     for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d",&b[i][j]);
        }
    }
     printf("sum of two matrix");
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    }