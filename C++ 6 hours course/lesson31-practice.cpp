#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

std::string computerchoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    std::string disp;
    switch (num){
        case 1 : disp = "Rock";
        break;
        case 2 : disp = "Paper";
        break;
        case 3 : disp = "Scissors";
        break;
    }
    return disp;
}
std::string displaychoice(char choice){
    std::string disp;
    switch (tolower(choice)){
        case 'r' : disp = "Rock";
        break;
        case 'p' : disp = "Paper";
        break;
        case 's' : disp = "Scissors";
        break;
    }
    return disp;
}
void choosewinner(char player){
    switch (tolower(player)){

        case 'r' : if (computerchoice() == "Rock"){
            cout << "\nIts a tie";
        }
        else if (computerchoice() == "Paper"){
            cout << "\nYou lose :(";
        }
        else if (computerchoice() == "Scissors"){
            cout << "\nYou win :DD";
        }
        break;

        case 'p' : if (computerchoice() == "Rock"){
            cout << "\nYou win :DD";
        }
        else if (computerchoice() == "Paper"){
            cout << "\nIts a tie";
        }
        else if (computerchoice() == "Scissors"){
            cout << "\nYou lose";
        }
        break;

        case 's' : if (computerchoice() == "Rock"){
            cout << "\nYou lose";
        }
        else if (computerchoice() == "Paper"){
            cout << "\nYou win ";
        }
        else if (computerchoice() == "Scissors"){
            cout << "\nIts a tie";
        }
        break;
    }
}
int score(char player){
    int score = 0;
    switch (tolower(player)){

        case 'r' : if (computerchoice() == "Rock"){
            score = 0;
        }
        else if (computerchoice() == "Paper"){
            score = -1;
        }
        else if (computerchoice() == "Scissors"){
            score = 1;
        }
        break;

        case 'p' : if (computerchoice() == "Rock"){
            score = 1;
        }
        else if (computerchoice() == "Paper"){
            score = 0;
        }
        else if (computerchoice() == "Scissors"){
            score = -1;
        }
        break;

        case 's' : if (computerchoice() == "Rock"){
            score = -1;
        }
        else if (computerchoice() == "Paper"){
            score = 1;
        }
        else if (computerchoice() == "Scissors"){
            score = 0;
        }
        break;
    }
    return score;
}
int main(){
    char player;
    int runningtotal = 0;
    char conti;

    do{
    cout << '\n' <<"********Rock-Paper-Scissors!********\n************************************\n";
    cout <<"pick R for Rock \nPick P for paper \nPick S for Scissors \n";
    do{
    cin >> player;
    }while (displaychoice(player) != "Rock" && displaychoice(player) != "Paper" && displaychoice(player) != "Scissors");
    cout << "you've chosen " << displaychoice(player);
    std::string comp = computerchoice();
    cout <<"\nthe computer has chosen " << comp;
    choosewinner(player);
    runningtotal += score(player);
    cout <<"\nyour score is now " << runningtotal;
    cout <<"\nplay again? enter any letter to continue, or N to stop";
    cin >> conti;
    }while (conti != 'n');
    cout << "\nyour final score was" << runningtotal << "\n thank you for playing";

    return 0;

}
    

