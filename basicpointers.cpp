#include <iostream>

// int main(){
//     std::string wot = "Bruh";
//     int age = 22;
//     std::string *pwot = &wot;
//     int *page = &age;
    
//     std::cout << *pwot << std::endl;
//     std::cout << *page << std::endl;
    
//     return 0;
// }
int main() {
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if (pointer = nullptr) {
        std::cout << "address was not assigned!\n";

    }else {
        std::cout << "Address was assigned! \n";
    }
    return 0;
}