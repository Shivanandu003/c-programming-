#include<stdio.h>
int main(){
    int p,t,r,s;
    printf("enter the value of principle value");
    scanf ("%d",&p);
    printf("enter the value of time");
    scanf ("%d",&t);
    printf("enter the value of rate of intrest");
    scanf ("%d",&r);
    s=p*t*r/100;
printf("the simple intrest =%d",s);
return;
}