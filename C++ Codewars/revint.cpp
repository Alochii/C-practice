#include <iostream>
#include <string>
#include <vector>
#include <cmath>


using namespace std;
double digitize(unsigned long n) 
{        
    for (int i = 0; n > pow(10,i) ; i++){
        cout << i << " " << n <<endl;
        int s = n / pow(10,i);
        cout << s <<endl;
    }
    double s = n/100;
    return s;
}

int main(){
    cout << digitize(923);


    return 0;
}