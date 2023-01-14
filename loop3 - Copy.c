// Print the table of a number input by the user .
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter value of the table you want");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,i*n); 
    }
    return 0;

}