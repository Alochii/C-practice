#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
int main(){
    cout <<"**************CALCULATOR****************" <<'\n';
    char op;
    double num1;
    double num2;
    cout <<"input an operation (+ - * /)";
    cin >> op;
    cout <<"input the first number";
    cin >> num1;
    cout <<"input the second number";
    cin >> num2;
    switch(op){
        case '+':
        cout << num1 + num2;
        break;
        case '-':
        cout << num1 - num2;
        break;
        case '*':
        cout << num1 * num2;
        break;
        case '/':
        cout << num1 / num2;
        break;
        default:
        cout << "you did something wrong";
        break;
    }
    cout <<'\n' <<"****************************************";
    return 0;
}
