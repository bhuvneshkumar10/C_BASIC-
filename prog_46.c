#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *ptr=a;
    printf(" The value of third element of this array is %d\n", *(ptr+2));
    return 0;
}