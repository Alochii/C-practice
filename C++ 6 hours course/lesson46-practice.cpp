#include <iostream>

using std::cout;
using std::cin;
using std::string;

int addeven(string number);
int addodd(string number);
int splitsum(int nums);

int main(){
    string cardnumber; //6250941006528599 is a valid number
    

    cout << "enter your card number : \n";
    cin >>cardnumber;
    int checksum = addodd(cardnumber) + addeven(cardnumber);
    cout <<cardnumber.size();
    if (checksum % 10 == 0 && cardnumber.size() == 16){
        cout << "the card number "<<cardnumber<<" is valid";
    }
    else{
        cout << "the card number "<<cardnumber<<" is invalid";
    }
    return 0;
}

int addodd(string number){
    int sum = 0;
    int cor;
    for (int i=number.size()-1 ; i >=0; i-=2){
        sum += (number[i]- 48);
    }
    cout << sum;


    return sum;
}
int addeven(string number){
    int weirdnumber;
    int sum = 0;
    int cor;
    for (int i=number.size()-2 ; i >=0; i-=2){
        weirdnumber=(number[i]-48) *2;
        if (weirdnumber >=10){
            weirdnumber=splitsum(weirdnumber);
        }
        sum += weirdnumber;
    }
    cout << sum;

    return sum;
}
int splitsum(int nums){
    return (nums %10) + (nums/10 %10);
}