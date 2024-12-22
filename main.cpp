#include <iostream>
#include <thread>

std::string mes = "Hello, World!";
int main()
{
    for (int i = 0; i < mes.length(); i++)
    {
        std::cout << mes[i] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << std::endl;
    return 0;
}