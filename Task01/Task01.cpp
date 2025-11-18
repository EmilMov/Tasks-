#include <iostream>
#include <fstream>

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
    return 0;
}
