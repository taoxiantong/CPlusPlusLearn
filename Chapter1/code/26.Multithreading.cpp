#include <iostream>
#include <thread>

void thread_1()
{
    std::cout<<"thread_1 excuting"<<std::endl;
}

int main()
{
    std::thread threadObj1(thread_1);
    std::thread threadObj2(thread_1);
    
    if(threadObj1.get_id() != threadObj2.get_id())
    {
        std::cout<<"Both have diffent ID."<<std::endl;
    }
    
        
    std::cout<<"threadObj1 ID is: "<< threadObj1.get_id() <<std::endl;
    std::cout<<"threadObj2 ID is: "<< threadObj2.get_id() <<std::endl;

    threadObj1.join();
    threadObj2.join();
    
    
    std::cout<<"Exit of main function"<<std::endl;
    return 0;
}
