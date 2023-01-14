//write a program in c to print fibonacci series upto n.
#include<stdio.h>
int main(){
    printf("Enter no. of term of fibonacci series");
    int a,first=0,second=1,third=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        
        
        first=second;
        second=third;
        third=first+second;
    printf("%d\n",third);
         
    }
    return 0;


}