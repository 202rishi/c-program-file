//write a c program to find square of a number using function.

#include<stdio.h>
int powerrr(int a, int b );
int main(){
    printf("enter number");
    int a,p;
    scanf("%d",&a);
    printf("power");
    scanf("%d",&p);
    printf("%d ^%d %d",a,p,powerrr(a,p));
    return 0;
}

int powerrr(int a,int b){
    int m=1;
    for(int i=1;i<=b;i++)
    {
      m=m*a;   
    }
    return m;
}