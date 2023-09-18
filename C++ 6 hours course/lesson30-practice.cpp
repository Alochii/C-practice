#include <iostream>

using std::cin;
using std::cout;


void withdrawal(double w);   
void deposition(double d);

double balance = 56.04;

int main(){
    int input;
    double withdraw;
    double deposit;
    cout << "Welcome to Alochii's bank. please press: \n";

    do{
        cout << " 1 to check your balance. \n";
        cout << " 2 to withdraw money.\n";
        cout << " 3 to deposite money.\n";
        cout << " 4 to exit the application.\n";
        cin >> input;
        std::cin.clear();
        fflush(stdin);
        switch (input){
            case 1: cout <<"your current balance is: $" << balance << '\n';
            break;
            case 2: withdrawal(withdraw);
            break;
            case 3: deposition(deposit);
            break;
            case 4: cout <<"Thank you for making alochii's bank your first choice.";
            break;
        }
    }while (input != 4);

}
void withdrawal(double w){
    cout << "your current balance is $" << balance <<"\nenter the amount you wish to withdraw \n";
    cin >> w;
    if (w <= balance && w > 0){
        balance -= w;
    cout << "you've withdrawn $" << w <<"\nyour new balance is $" << balance << '\n';
    }
    else{
        cout << "please enter a valid number or check your balance \n";
    }
}
void deposition(double d){
    cout << "enter the amount you wish to deposit \n";
    cin >> d;
    if (d > 0){
        balance += d;
        cout << "you've added $" << d <<" to your account" <<"\nyour new balance is $" << balance << '\n';
    }
    else{
        cout << "please enter a valid positive number \n";
    }
}
