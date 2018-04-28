#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double y( double x){
    return 1/(1+pow(x,2));
}
int main()
{
    double n,i;
    double x=0,h,sum=0;
    printf("Enter n :");
    scanf("%lf",&n);
    h=6/n;
    for(i=1;i<n;i++){
        x=x+h;
        sum = sum + 2*(y(x));
    }
    printf("Output: %lf",((h/2)*(sum+y(0)+y(6))));
    return 0;
}
