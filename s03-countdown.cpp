#include <iostream>
#include <string>
#include <algorithm>

auto main(int argc, char* argv[]) -> int 
{

    if (argc == 0) return 1;

    auto a = std::string{argv[1]};
    auto argument = std::stoi(a);

    std::cout<<argument<<"...\n";

    if (argument > 0)
    {
        while (argument != 0)
        {
            argument--;
            std::cout<<argument<<"...\n";
        }
    }
    else 
    {
        while (argument != 0)
        {
           argument++;
            std::cout<<argument<<"...\n";
        }
    }

    return 0;
}
