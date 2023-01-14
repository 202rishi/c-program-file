//Keep taking number as input from user until user enter a odd number
#include<stdio.h>
int main()
{
    int i,n;
    for(i=1;;i++){
        printf("enter number");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }
    printf("thank you");
    return 0;
}