//write a program in c to remove a given element.
//bubble sorting.
#include<stdio.h>
int main(){
    int n,d;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter no. to be removed");
    scanf("%d",&d);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==d){
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];

            }        
         break;
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);

    }
return 0;
}