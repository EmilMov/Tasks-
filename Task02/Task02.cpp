#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream OUT;
    OUT.open("user.txt");
    if(OUT){
    std::string name;    
    std::cout<<"Please, Enter the name of the user : ";
    std::cin>>name;
    OUT<<name<<"\n";
    std::string prog_language;
    std::cout<<"What programing language do you prefer ? : ";
    std::cin>>prog_language;
    OUT<<prog_language;
    OUT.close();
    }
    return 0;
}
