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
    std::cout << "Please.Enter the line that you want to change : ";
    std::string theline;
    std::cin>>theline;
    std::cout << "Please,Enter the line that you want to push : ";
    std::string nwline;
    std::cin>>nwline;
    std::string tmp;
    while(std::getline(IN,tmp)){
        if(tmp != theline){
            OUT<<tmp<<std::endl;
        }else{
            OUT<<nwline<<std::endl;
        }
    }
    IN.close();
    OUT.close();
    return 0;
}
