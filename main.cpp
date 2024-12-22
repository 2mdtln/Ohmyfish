#include <iostream>
#include <thread>

std::string mes = "Hello, World!";
int i;
int main()
{
    while(i < mes.length())
    {
        std::cout << mes[i] << std::flush;
        i++;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
    return 0;
}
