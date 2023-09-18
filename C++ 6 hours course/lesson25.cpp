#include <iostream>

using std::cout;
using std::cin;
int main(){
    srand(time(0));
    int tries = 0;
    int guess;
    int number = ((rand())% 100) + 1 ;
    do{
        
        cout << "guess a number!";
        cin >> guess;
        if (guess < number){
            cout << "you're too low, ";
        }
        else if (guess > number){
            cout << "you're too high, ";
        }
        tries +=1;
    }while (guess != number);
    cout << "you got it! the number was " << number << " and you got it in " << tries <<" attempts!";

    return 0;
}