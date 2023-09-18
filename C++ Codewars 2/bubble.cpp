#include <iostream>
#include <iterator>

int main(){
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 ,2,3,1,5,2,5,6,7,8,4,2,3,4,2};
    int check {0};
    int count = 0, count2 = 0;
for (int j = 0; j< std::size(array) -1 ; j++){
    for (int i = 0; i < std::size(array)-1-j; i++){
        if (array[i]> array[i+1]){
            std::swap (array[i], array[i+1]);
            check += 1;
        }
    }
    if (check == 0){
            break;
       }
    check = 0;
}
    for (int i = 0; i < std::size(array); i++){
        std::cout << array[i];
    }
    std::cout <<std::endl<< "count : "<<count<<std::endl;
    std::cout << "count2 : "<<count2 << std::endl; 

    return 0;
}
