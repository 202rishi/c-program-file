//wac to swap 2 number using function.

#include<stdio.h>
void swap(int a,int b){
    int j=0;
    j=a;
    a=b;
    b=j;
    printf("N1=%d and N2=%d",a,b);
}
int main(){
    printf("enter two numbers");
    int A,B;
    scanf("%d%d",&A,&B);
    printf("N1=%d and N2=%d and after swapping=\n",A,B);
    swap(A,B);
    return 0;
}