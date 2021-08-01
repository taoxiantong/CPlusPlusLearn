# include "iostream"
# include "boost/scoped_ptr.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/scoped_array.hpp"
#include "vector"
using namespace std;

void scope_test()
{
    boost::scoped_ptr<int> i(new int);
    cout<<"i: "<< i <<endl;    
    *i = 1;
    cout<<"i: "<< i <<"  *i: "<< *i<<endl;
    *i.get() = 2;
    cout<<"i: "<< i <<"  *i: "<< *i<<endl;
    i.reset(new int);
    cout<<"i: "<< i <<endl;
    
    *i = 3;
    cout<<"i: "<< i <<endl; 

}

void array_test()
{
    boost::scoped_array<int> i(new int[2]);
    cout<<"i: "<<i <<endl;
    *i.get() = 1;
    cout<<"*i.get() : "<< i <<endl;
    i[1] = 2;
    cout<<"i[1]: " << i[0] << " , " << i[1] << endl;
    i.reset(new int[3]);

}

void shared_test()
{
    boost::shared_ptr<int> i1(new int(1));
    cout<<"i1: "<< *i1 <<"  i1 adv: "<<&i1<<endl;

    boost::shared_ptr<int> i2(i1);
    cout<<"i2: "<< *i2 <<"  i2 adv: "<<&i2<<endl;
    i1.reset(new int(2));

    cout<<"i1: "<< *i1 <<"  i1 adv: "<<&i1<<endl;
    cout<<"i2: "<< *i2 <<"  i2 adv: "<<&i2<<endl;
}
int main()
{
    shared_test();
    return 0;
}
