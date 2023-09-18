#include <iostream>

using std::cin;
using std::cout;

int main (){
    std::string questions[]={"how old am i?","where am i from?","whats my name?"};
    std::string options[][4]=   {{"A. 12","B. 16","C. 23","D. 26"},
                                {"A. albania", "B. algeria","C. america","D. japan"},
                                {"A. alochii","B. Ali","C. alex","D. anasthasia"}};
    char answers[]={'C', 'B','B'};
    char guess;
    int correct=0;
    for (int i = 0; i<3 ; i++){
        cout << questions[i] << '\n';
        cout << "****************************\n";
        for (int j = 0; j<4; j++){
            cout << options [i][j] << '\n';
        }
        cin >> guess;

        if (toupper(guess)==answers[i]){
            cout <<"Correct!\n";
            correct +=1;
        }
        else {
            cout <<"incorrect!\n";
        }
        cout << "****************************\n";
    }
    cout << "you got "<<correct <<" out of 3 questions right!\nyour scored "<< double(correct) / 3 *100 <<"%";




    return 0;
}