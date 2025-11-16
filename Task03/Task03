#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream OUT("journal.txt" , std::ios::app);
    if(OUT){
        std::string s;
        std::getline(std::cin , s);
        OUT<<s<<"\n";
    }
    return 0;
}
