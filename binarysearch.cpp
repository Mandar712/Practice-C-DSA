#include <iostream>
int binary_search(int arr[],int num,int tofind);

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int num = sizeof(arr)/sizeof(arr[0]);
    int tofind;
    std::cout << "Enter the number which you want to find : ";
    std::cin >> tofind;
    int final = binary_search(arr,num,tofind);
    std:: cout << "The " << tofind << " is present at " << final << " index." << std::endl;
    return 0;
}
int binary_search(int arr[],int num,int tofind){
    int start = 0;
    int end = num - 1;
    int mid;
    while(start<=end){
        mid = (start + end)/2;
        if (arr[mid] == tofind){ // {1,2,3,4,5,6,7,8}
            return mid;
        }
        else if (arr[mid]>tofind)
        {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    std::cout << "The number is not present in the array." << std::endl;
}