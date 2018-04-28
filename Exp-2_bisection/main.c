#include <stdio.h>
#include <stdlib.h>

float func(float x){
    return pow(x,3)-(4*x)-9;
}
float mod(float x){
    if(x<0){
        return x*-1;
    }
    else{
        return x;
    }
}
int main(){
    float a,b,c;
    int n;
    printf("x^3-4x-9 \na: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("1. Bisections\n2. Regula Falsi\n");
    scanf("%d",&n);
    if(func(a)*func(b)>0){
        printf("Not proper a and b");
        return 0;
    }
    while(1){
        if(n==1)
            c=(a+b)/2;
        else if(n==2)
            c=((a*func(b))-(b*func(a)))/(func(b)-func(a));
        else{
            printf("INVALID N");
            break;
        }
        printf("a: %f b: %f c: %f\n",a,b,c);
        if(func(a)*func(c)<0){
            if(b==c)
                break;
            b=c;
        }else{
            if(a==c)
                break;
            a=c;
        }
        if(mod(b-a)<0.001){
            break;
        }
    }
    printf("c: %f",c);
    return 0;
}
