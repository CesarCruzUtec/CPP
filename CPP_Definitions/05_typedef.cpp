#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
    //pairList_t pairList;
    text_t text = "Hello";
    std::cout << text << '\n';

    number_t age = 21;
    std::cout << age << '\n';

    return 0;
}