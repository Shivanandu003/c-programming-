#include<stdio.h>
int main(){
    int n, i, j;
printf("enter the number of rows and columns in amatrix");
scanf("%d",&n);
int a[n][n];
printf("enter the elements of matrix");
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    scanf("%d",&a[i][j]);
}
}
printf("elements of matrix are\n");
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    printf("%d\t",a[i][j]);
}
printf("\n");
}

printf("the elements on principlediagonal\n ");
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
        if(j+i==n-1&&a[i][j]%7==0){
  printf("%d\t",a[i][j]);
        }
}
}
return 0;
}