#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>

auto main(int argc, char* argv[]) -> int 
{
        if (argc == 0) return 1;

        auto value = std::string{argv[1]};
        auto x = std::stoi(value);

        for (int y=1;y<=x;y++)
        {
            std::cout<<y<<" ";
            if (y%3==0) std::cout<<"Fizz";
            if (y%5==0) std::cout<<"Buzz";
            std::cout<<"\n";
        }
        return 0;
}
