#include <stdio.h>

float c2f(float C){
    return (C*9.0/5.0) + 32;

}
int main(){
    float c;
    printf("Enter temperature in celsius:");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit for %.2f is:%.2f", c, c2f(c));
    return 0;
}