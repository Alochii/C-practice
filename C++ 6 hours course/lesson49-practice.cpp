#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

void grid(string spaces[]){
    cout << "  " << spaces[0]<<  "  |  "<< spaces[1] << "  |  "<<spaces[2] << "  ";
    cout << "\n" <<"-----------------" << '\n';
    cout << "  " << spaces[3]<<  "  |  "<< spaces[4] << "  |  "<<spaces[5] << "  ";
    cout << "\n" <<"-----------------" << '\n';
    cout << "  " << spaces[6]<<  "  |  "<< spaces[7] << "  |  "<<spaces[8] << "  \n";
}
void player(string spaces[]){
    int spot;
    do{
        cout << "\nchoose a number from 1 to 9 and press enter to play\n";
        cin >>spot;
        if (spaces[spot-1] == " "){
            spaces[spot-1] = "X";
            break;
        }
        else{
            cout <<"that spot is taken dummy\n";
            grid(spaces);
        }
    }while (spaces[spot-1] != " ");
}
void computer(string spaces[]){
    srand(time(0));
    int spot;
    int weirdcheck;
    do{
        spot = rand() % 9+1;
        if (spaces[spot-1] == " "){
            spaces[spot-1] = "O";
            cout << "the computer played O on spot " << spot <<'\n';
            weirdcheck = rand() % 8;
            if (weirdcheck == 4){
                cout << "pssssst, there's a vewy special prize if you get to 10 points i hear *--*!\n";
            }
            break;
        }
    }while (spaces[spot-1] != " ");
}
bool gameopen(string spaces[]){
    int checksum=0;
    for (int i = 0; i<9; i++)
        if (spaces[i] == " "){
        checksum +=1;
    }
    if (checksum > 0){
        return true;
    }
    else{
        return false; 
    }
}
bool checkwin(string &winner, string spaces[]){
    if (spaces[0] != " " && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        winner = spaces[0];
        return false;
    }
    else if (spaces[3] != " " && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        winner = spaces[3];
        return false;
    }
    else if (spaces[6] != " " && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        winner = spaces[6];
        return false;
    }
    else if (spaces[0] != " " && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        winner = spaces[0];
        return false;
    }
    else if (spaces[1] != " " && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        winner = spaces[1];
        return false;
    }
    else if (spaces[2] != " " && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        winner = spaces[2];
        return false;
    }
    else if (spaces[0] != " " && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        winner = spaces[0];
        return false;
    }
    else if (spaces[2] != " " && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        winner = spaces[2];
        return false;
    }
    else{
        return true;
    }
}

int main(){
    string spaces[9];
    string temp = " ";
    string winner = "N";
    int score = 0;
    cout <<"WELCOME TO ALOCHII'S HOMEMADE TIC TAC TOE! \n *********made with lots of love********* \n";
    do{
        fill(spaces, spaces +9, " ");
        grid(spaces);

        while (checkwin(winner, spaces)){
            player(spaces);
            grid(spaces);

            if (checkwin(winner, spaces)== false){
                break;
            }
            else if (gameopen(spaces) == false){
                winner = "N";
                break;
            }
        computer(spaces);
        grid(spaces);
        }
        if (winner == "X"){
            cout << "you won ;/; goodie bunniiii <3 ";  
            score +=1;
        }
        else if (winner == "O"){
            cout << "awie the computer won >< better luck next time bunny! ";
            score -=1;
        }
        else if (winner == "N"){
            cout <<"its a tie? that literally never happens (thats what he said) ";
        }
        cout << "you scored "<<score <<" mew points ;/;/\n";
        cout << "press any letter and then enter to continue\n";
        if (score >= 10){
            cout <<"***********************************************************" <<'\n';
            cout << "imgur.com/a/MzxRgBK ;//; mew <3 super secret prize mhm mhm\n";
            cout <<"***********************************************************" <<'\n';

        }
        cin >> temp;
    }while (true);
    return 0;
}