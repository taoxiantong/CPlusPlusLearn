//==============2.1 虚函数多态的效果=============================
/*
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
    virtual void show2()
    {
        cout<<"In Base and fun show2()"<<endl;
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
    virtual void show2()
    {
        cout<<"In child and fun is show2()"<<endl;
    }

};

int main()
{
    Base A;
    Child B;
    Base *C = new Child;
    
    A.show();
    A.show1();
    A.show2();
    
    B.show();
    B.show1();
    B.show2();
    
    C->show();      // 无虚函数 输出为指针所在位置
    C->show1();     // 有虚函数 输出为对象所在位置
    C->show2();

    return 0;
}
*/

//==============虚函数控制作用的实际应用=============================
/*
#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() const = 0; //纯虚函数
};

class Square : public Shape {
    double size;
public:
    Square(double s) {
        size = s;
    }
    virtual double area() const {
        return size * size;
    }
};
 
class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    virtual double area() const {
        return 3.14159 * radius * radius;
    }
};
 int main()
 {
    Shape* array[2]; //定义基类指针数组
    Square Sq(2.0);
    Circle Cir(1.0);
    array[0] = &Sq;
    array[1] =&Cir;
    for (int i = 0; i < 2; i++)
    {
        cout << array[i]->area() << endl;
    }
    cout<<Sq.area()<<endl;
    cout<<Cir.area()<<endl;
    return 0; 
}
*/

//==============3.1 虚函数多态的效果=============================
#include <iostream>
using namespace std;
class Base
{
public:
    void show(int x = 0)
    {
        cout<<"In Base and fun is show() "<< x <<endl;
    }
    virtual void show1(int x = 1)
    {
        cout<<"In Base and fun show1() "<< x <<endl;
    }
    virtual void show2(int x = 2)
    {
        cout<<"In Base and fun show2() "<< x <<endl;
    }
};

class Child: public Base
{
public:
    void show(int x = 3)
    {
        cout<<"In child and fun is show() "<< x <<endl;
    }
    void show1(int x = 4)
    {
        cout<<"In child and fun is show1() "<< x <<endl;
    }
    virtual void show2(int x = 5)
    {
        cout<<"In child and fun is show2() "<< x <<endl;
    }

};

int main()
{
    Base A;
    Child B;
    Base *C = new Child;
    
    A.show();
    A.show1();
    A.show2();
    
    B.show();
    B.show1();
    B.show2();
    
    C->show();      // 无虚函数 
    C->show1();     // 基类有虚函数 
    C->show2();     // 基子虚函数

    return 0;
}