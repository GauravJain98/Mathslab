#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func(float x){
    return pow(x,3)-(4*x)-9;
}
float dfunc(float x){
    return 3*pow(x,2)-4;
}
int main(){
    float a,b,c;
    int n,i;
    printf("x^3-4x-9 \na: ");
    scanf("%f",&a);
    printf("n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        b=a-func(a)/dfunc(a);
        a=b;
    }
    printf("b: %f",b);
    return 0;
}
