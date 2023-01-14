// Print factorial of n.
#include <stdio.h>
int main(){
    int a=1,i,n;

    printf("Enter value of n ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        a=i*a;
        
    }
    printf("factorial of 'n' is=%d",a);
    return 0;
    
}