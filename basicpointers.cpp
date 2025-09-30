#include <iostream>

int main(){
    std::string wot = "Bruh";
    int age = 22;
    std::string *pwot = &wot;
    int *page = &age;
    
    std::cout << *pwot << std::endl;
    std::cout << *page << std::endl;
    
    return 0;
}