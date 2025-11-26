#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::string source;
    std::cout << "Please,Enter the sourse file : ";
    std::cin >> source;
    std::ifstream IN(source);
    std::string destination ;
    std::cout << "Please,Enter the destination file : ";
    std::cin >> destination;
    std::ofstream OUT(destination);
    std::string tmp;
    while(std::getline(IN,tmp)){
        OUT<<tmp<<std::endl;
    }
    IN.close();
    OUT.close();
    return 0;
}
