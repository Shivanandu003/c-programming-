#include<stdio.h>
int main(){
    int a,b,c,d,sum=0,prod=1;
    printf("enter the value of a b c d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
sum=a+b;
prod=c*d;
int i=sum;
while (i<=prod)
{
   if(i%2==0){
    printf("%d",i);
   }
   i++;
}
return 0;
}