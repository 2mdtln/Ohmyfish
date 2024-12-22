#include <iostream>

std::string mes = "Hello, World!";
int i = 0;

int main()
{
    while(i < mes.length())
    {
        std::cout << mes[i] << std::endl;
        i++;
    }
    return 0;
}
