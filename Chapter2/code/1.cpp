#include "iostream"
#include "vector"
#include "string"
#include "cstdlib"
#include "stdexcept"

using namespace std;

template <class T>
class Stack
{
    private:
        vector<T> elems; //元素

    public:
        void push(T const&); //常引用作为形参
        void pop();//栈
        T top()const;
        bool empty()const{
            return elems.empty();
        }
};

template <class T>
void Stack<T>::push(T const& elem)
{
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if(elems.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top()const
{
    if(elems.empty())
    {
        throw out_of_range("Stack<>::top: empty stack");
    }
    return elems.back();
}


int main()
{
    try
    {
        Stack<int> intStack;
        intStack.push(1);
        intStack.push(2);
        intStack.push(3);
        cout<<intStack.top()<<endl;

        intStack.pop();
        cout<<intStack.top()<<endl;
    }
    catch (exception const& ex)
    {
        cerr <<"Exception: "<<ex.what()<<endl;
        return -1;
    }

    return 0;
}
