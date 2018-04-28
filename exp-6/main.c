#include <stdio.h>
#include <stdlib.h>
float y(float x){
    return 1.0/(1.0+(x*x));
}
int main(){
    float h,n,x=0.0,yr;
    int i;
    printf("Enter n:");
    scanf("%f",&n);
    h=6.0/n;
    yr=y(0)+y(n);
    for(i=1;i<n;i++){
        x=x+h;
        if(i%3==0)
            yr = yr + 2*y(x);
        else
            yr = yr + 3*y(x);
    }
    printf("%f",(3*h*yr/8));
    return 0;
}
