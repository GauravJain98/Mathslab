#include <iostream>

using namespace std;

class father{
public:
    void cricket(){
        cout<<"I play cricket alot"<<endl;
    }
};

class mother{
public:
    void knit(){
        cout<<"I knit alot"<<endl;
    }
};

class child: public mother,public father{
    int age;
public:
    child(int age){
        this->age = age;
    }
    void getAge(){
        cout<<this->age<<endl;
    }
};
int main(){
    child c(5);
    c.knit();
    c.cricket();
    c.getAge();
}
