#include<stdio.h>
int main(){
    int n, i, j,sum=0,prod=1;
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
    printf("%d\t\n",a[i][j]);
}
printf("\n");
}

printf("the elements on principlediagonal whoch is\n ");
for(i=0;i<=n-1;i++){
   
    for(j=0;j<=n-1;j++){
        if(i-j==0){
            sum=sum+a[i][j];
            prod=prod*a[i][j];
  printf("%d\t",a[i][j]);
        }
}
}
printf("sum=%d\nproduct=%d",sum,prod);
return 0;
}