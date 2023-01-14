//wac to seperate odd and even of an given array and store it in two differnt array.




#include<stdio.h>
int main(){
    int n,o,e;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    int k=0,j=0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            b[j]=a[i];
            j++;    
        }
        else{
            c[k]=a[i];
            k++;
        }
        
        }
printf("Even array is:-");
    for(int i=0;i<j;i++){
        printf("%d ",b[i]);
    }
printf("odd array is:-");
for(int i=0;i<k;i++)
printf("%d",c[i]);
return 0;
}