#include <iostream>

using std::cout;
using std::cin;
int main(){
    int rows;
    int colomns;
    char symb;
    cout << "enter how many rows there are \n";
    cin >> rows;
    cout << "enter how many colomns there are \n";
    cin >> colomns;
    cout << "enter which symbol you want to use \n";
    cin >> symb;
    for (int i=1; i<= rows; i+=1){
        for (int j=1; j<= colomns; j+=1){
        cout << symb;
        }
    cout << '\n';
    }
    
}