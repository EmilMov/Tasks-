#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ofstream OUT;
    OUT.open("hello.txt");
    if(!OUT){
        std::perror("Failed to open file");
    }else{
    OUT<<"Hello , C++ File World!";
    OUT.close();
    }
    std::string text;
    std::ifstream IN("hello.txt");
    if(!IN){
        std::perror("Failed to read from file");
    }else{
        getline(IN,text);
    }
    std::cout<<text<<std::endl;
    return 0;
}
