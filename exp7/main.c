#include <stdio.h>
#include <stdlib.h>

float y(float x, float yn){
    return 2*x+yn;
}

int main(){
    float x0,y0,xn,h;
    printf("Enter X0:");
    scanf("%f",&x0);
    printf("Enter Y0:");
    scanf("%f",&y0);
    printf("Enter XN:");
    scanf("%f",&xn);
    printf("Enter h:");
    scanf("%f",&h);
    float yn=y(x0,y0),i,n=(xn-x0)/h;
    for(i=1;i<=n;i++){
        yn = yn+ h*(y(x0+i*h,yn));
    }
    printf("%f",yn);
    return 0;
}
