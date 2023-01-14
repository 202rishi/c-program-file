// write a program in c to find 2nd smallest and second largest number in an array..




#include<stdio.h>
int main(){
    int n,m=0,l=0,s=0,ss=0,sl=0;
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
    m=a[0];
    s=m;
    for(int i=1;i<n;i++){
        if(a[i]<m){
        s=a[i];
        m=a[i];
        }
    }
        printf("smallest= %d ",s);

    m=a[0];
    ss=m;
    sl=0;
    for(int i=1;i<n;i++){
        if(a[i]>m && a[i]<l){
            sl=a[i];
            m=a[i];
        }
        if(a[i]<m && a[i]>s){
            ss=a[i];
            m=a[i];
        }

    }
printf("second smallest =%d\n second largest=%d\n",ss,sl);

return 0;
}