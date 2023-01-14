// wap in c to print cube of given number using function.
#include<stdio.h>
int cube(int a){
    int m=0;
    m=a*a*a;
    return m;
}
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);
    printf("cube of %d is %d",a,cube(a));
    return 0;
}