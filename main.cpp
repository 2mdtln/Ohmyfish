#include <iostream>
#include <thread>

int main()
{
    std::string output;
    for (char target : "Hello, World!")
    {
        if (target == ' ')
        {
            std::cout << (output += ' ') << std::flush;
            continue;
        }
        for (char current = 32; current != target; current = (current == 126 ? 32 : current + 1))
        {
            std::cout << '\r' << output << current << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(6));
        }
        output += target;
        std::cout << '\r' << output << std::flush;
    }
    std::cout << std::endl;
    return 0;
}
