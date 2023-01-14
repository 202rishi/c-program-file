// write a program in c to take an array of N size and tell count of positive ,nagtive and zero of array elemnts.
#include<stdio.h>
int main(){
    printf("enter the value of N");
    int n,p=0,z=0,N=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    
    if(a[i]>0)
    p+=1;
    if(a[i]<0)
    N+=1;
    if(a[i]==0)
    z+=1;
    }
    printf("+tive= %d \n-ve= %d \n zero=%d \n",p,N,z);
 
    return 0;
}