#include<stdio.h>
int* sum(int a, int b){
   int c= a+b;
   int *ptr =&c;
   printf("The sum is %d\n", *ptr);
   return ptr;

}
 float* avg(float x, float y){
    float A=(x+y)/2.0;
    float *ptr=&A;
    printf("The average is %f\n", *ptr);
    return ptr;
 }

 int main(){

    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a , &b);
    int *ptr1 = sum(a,b);

    float x,y;
    printf("Enter two numbers:");
    scanf("%f %f", &x , &y);
    float *ptr2 = avg(x,y);

    printf("The address of the sum and average are %u and %u respectively\n", ptr1, ptr2);
    return 0;
 }