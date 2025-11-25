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
    OUT<<"Hello , C++ File World!"<<std::endl;
    OUT<<"whazupp?";
    OUT.close();
    }
    std::string text;
    int count = 0;
    std::ifstream IN("hello.txt");
    if(!IN){
        std::perror("Failed to read from file");
    }else{
        while(std::getline(IN,text)){
            count++;
        }
        
    }
    std::cout<<count<<std::endl;
    return 0;
}
