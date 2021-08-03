#include <iostream>

using namespace std;

class Base
{
public:
    void show()
    {
        cout<<"In Base and fun is show()"<<endl;
    }
    virtual void show1()
    {
        cout<<"In Base and fun show1()"<<endl;
    }
};

class Child: public Base
{
public:
    void show()
    {
        cout<<"In child and fun is show()"<<endl;
    }
    void show1()
    {
        cout<<"In child and fun is show1()"<<endl;
    }

};

int main()
{
    Base A;
    Child B;
    Base *C = new Child;
    
    A.show();
    A.show1();
    
    B.show();
    B.show1();
    
    C->show();
    C->show1();

    return 0;
}
