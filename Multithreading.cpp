# include<iostream>
# include<thread>
void printMessage(const std::string & message){
    for(int i=0;i<5;++i)
     {
        std::cout<<message<<std::endl;
     }
}

int main()
{
    
    std::thread thread1(printMessage,"Thread 1 says Hello!");
    std::thread thread2(printMessage,"Thread 2 says Hii!");

    thread1.join();
    thread2.join();

    return 0;
}