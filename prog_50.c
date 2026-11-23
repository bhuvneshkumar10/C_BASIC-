#include<stdio.h>
void pointarray( int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n){
    int temp;
    for(int i=0; i<n/2; i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;

    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("The original array is:\n");
    pointarray(a,n);
    reverse(a,n);  
    printf("The reversed array is:\n");
    pointarray(a,n);
    return 0;
}