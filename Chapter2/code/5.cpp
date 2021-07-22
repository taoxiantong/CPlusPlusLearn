# include "iostream"
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

int main()
{
    array_test();
    return 0;
}
