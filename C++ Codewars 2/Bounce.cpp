#include <iostream>


int bouncingBall(double h, double bounce, double window){
    int count = 0;
    if ((bounce <= 0 || bounce >= 1)||(window >= h)||(h <= 0)){
        return -1;
    }
    while (h>window){
        count += 1;
        h *= bounce;
        if (h > window){
            count +=1;
        }
    }
    return count;
}

int main(){
    float height = 30;
    float bounce  = 0.66;
    float window = 31;
    std::cout << bouncingBall(height, bounce, window);


    return 0;
}