#include <iostream>
using namespace std;
int main(){
    int phonenum[10]= {1,2,3,4,5,6,7,8,9,0};
    string phone{};
    for (int i = 0; i < 10; i++){
        switch (i){
            case 0 : phone.append("(");
            break;
            case 3 : phone.append(") ");
            break;
            case 7 : phone.append("-");
            break;
        }
        phone.append(to_string(phonenum[i]));
        cout << phone << endl;

    }
    cout<< phone;


    return 0;
}
