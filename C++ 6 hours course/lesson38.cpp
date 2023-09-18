#include <iostream>

using std::cin;
using std::cout;

void sortup(int list[], int size){
    int temp;
    int iterations = 0 ;
    for (int i = 0; i < size -1 ; i++){
        for (int j = 0 ; j < size - 1 - i  ; j++){
            if (list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                iterations += 1;
            }
        }

    }
    cout << "iterations : " << iterations << '\n';
}

int main(){
    int list[]= {4,13,1,2,5,6,16,3,12,9,10,8,7,11,14,15};

    int size = sizeof(list) / sizeof(list[0]);
    int spares[size];
    for (int i = 0 ; i < size ; i++){
        spares[i] = list[i];
    }
    for (int element : spares){
        cout << element << " ";
    }
    cout << '\n';
    sortup(list,size);
    for (int element : list){
        cout << element << " ";
    }


    return 0;
}