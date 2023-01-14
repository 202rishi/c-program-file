//write a c program to find square of a number using function.

#include<stdio.h>
int square(int);
int main(){
    printf("enter number");
    int a;
    scanf("%d",&a);
    printf("square of %d is %d",a,square(a));
    return 0;
}
int square(int A){
    return(A*A);
}