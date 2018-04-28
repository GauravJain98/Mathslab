#include <iostream>

using namespace std;

double y(float x){
    return 1/(1+(x*x));
}

int main()
{
    float n=20,xn=6;
    int no=1;
    cout<<"n: "<<n<<endl;
    float h =6/n,ans=y(0)+y(xn);
    for(float i=h;i<xn;i=i+h){
        if(no%2 == 0){
            ans = ans + 2*y(i);
        }
        else{
            ans = ans + 4*y(i);
        }
        no++;
    }
    ans= ans*h/3;
    cout<<"Ans:"<<ans;
    return 0;
}
