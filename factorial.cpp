// Using loop
#include <iostream>
int fact(int in);
int main(){
    int in;
    int final;
    std::cout << "Enter the number which your want : ";
    std::cin >> in;
    final = fact(in);
    std::cout << "The factorial of "<<in << " is " << final << "."<< std::endl;
    return 0;
}
int fact(int in){
    int temp=1;
    for(int i = 1;i<=in;i++){
        temp = temp*i;
    }
    return temp;
}
// // Using recursion
// #include <iostream>
// int fact(int in);
// int main(){
//     int in;
//     int final;
//     std::cout << "Enter the number which your want : ";
//     std::cin >> in;
//     final = fact(in);
//     std::cout << "The factorial of "<<in << " is " << final << "."<< std::endl;
//     return 0;
// }
// int fact(int in){
//     if(in>1){
//         return in * fact(in-1);
//     }
//     else{
//         return 1;
//     }
// }