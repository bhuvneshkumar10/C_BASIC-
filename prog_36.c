#include<stdio.h>

float force(float m){
    return m*9.8;
}

int main(){
    float m;
    printf("Enter the mass of the object in kg:");
    scanf("%f", &m);
    printf("Force acting on the object of %.2f kg is:%.2f N", m, force(m));
    return 0;

}