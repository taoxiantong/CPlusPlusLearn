# include "boost/scoped_ptr.hpp"
# include "iostream"
using namespace std;

int main()
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
    return 0;
}
