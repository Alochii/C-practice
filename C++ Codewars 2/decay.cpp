#include <iostream>

int main(){
    int nums[6]{1,2,3,4,5,6};
    std::cout << "num at index 0 is : "<<&nums<<std::endl;
    std::cout << "num at index 0 is : "<<nums<<std::endl;

    std::cout << "pointer at index 3 is : "<<&nums[3]<<std::endl;
    std::cout << "num at index 0 is : "<<nums<<std::endl;



    return 0;
}