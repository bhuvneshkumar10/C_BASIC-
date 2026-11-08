#include<stdio.h>

int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter the position of the fibonacci series:");
    scanf("%d", &n);
    printf("The %dth term of the fibonacci series is:%d", n, fibonacci(n));
    return 0;
}