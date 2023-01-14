// write a c program to take an array from user and insert given no at given index



#include<stdio.h>
int main(){

int n,p,e;
printf("enter the no.");
scanf("%d",&n);
printf("enter elemnt");
scanf("%d",&e);
printf("enter postion");
scanf("%d",&p);
int a[n];
printf("enter values of array");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int m=0,k=0;
for(int i=0;i<n;i++){
m=a[i];
if(i+1==p){
    a[i]=e;
}
}
for(int i=0;i<n;i++){


printf("%d ",a[i]);
}


return 0;


}