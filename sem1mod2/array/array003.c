#include<stdio.h>
int main(){
    int n,i,lar;
    printf("enter the size of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the value of n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);

    }
    lar=a[0];
    for ( i = 0; i<=n-1; i++)
    {
    if(a[i]>lar){
        lar=a[i];
    }
    }
    
printf("largest element=%d",lar);
return 0;

}