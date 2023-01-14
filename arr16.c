//wac to print largest no in an array of Sixe N.




#include<stdio.h>
int main(){
    int n,m=0,l=0;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    m=a[0];
    l=m;
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>m){
        l=a[i];
        m=a[i];
        }
    }
        printf("Largest= %d ",l);
    
return 0;
}