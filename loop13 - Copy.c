// write a program in c to check wether the given number is prime or not.
#include<stdio.h>
int main(){
    int a,b=0;
    printf("Enter number ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            b++;
        }
    }
    if (b==2)
    printf("no is prime");
    else
    printf("no Is not prime");    

    
    return 0;

} 