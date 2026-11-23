#include<stdio.h>
int count(int a[], int n){
    int no_positive_int = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            no_positive_int++;
        }
    }
    return no_positive_int;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int positive_count = count(a, n);
    printf(" The number of positive integers in the array is %d\n", positive_count);
    return 0;
}