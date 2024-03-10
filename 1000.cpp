#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> words{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for(const std::string& word : words){
        std::cout << word << " ";
    }
    std::cout << "\n";

    std::cout << 5%2 << std::endl;

    return 0;
}