#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // length() returns the length of the string
    if(name.length() > 12){
        std::cout << "Your name can't be longer than 12 characters" << std::endl;
    } else {
        std::cout << "Welcome " << name << std::endl;
    }

    // empty() returns true if the string is empty
    // if(name.empty()){
    //     std::cout << "Your name can't be empty" << std::endl;
    // } else {
    //     std::cout << "Welcome " << name << std::endl;
    // }

    // clear() clears the string
    // name.clear();
    // std::cout << "Hello " << name << std::endl;

    // append() appends a string to the end of another string
    // name.append("@gmail.com");
    // std::cout << "Your email is " << name << std::endl;

    // at() returns the character at a specific index
    // std::cout << name.at(0) << std::endl;

    // insert() inserts a string at a specific index
    // name.insert(0, "Mr. ");
    // std::cout << "Your name is " << name << std::endl;

    // find() returns the index of a specific character
    // std::cout << name.find(" ") << std::endl;
    
    // erase() erases a character at a specific index
    // name.erase(0, 4);
    // std::cout << "Your name is " << name << std::endl;
    
    return 0;
}