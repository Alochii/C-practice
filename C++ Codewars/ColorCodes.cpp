#include <iostream>

using namespace std;

string RGB(int R, int G, int B){
  



  return "oops";
}


string hex(int num){
  string hexadecimal;
  int x = num;
  switch (x){
    case 10 : hexadecimal = "A";
    break;
    case 11 : hexadecimal = "B";
    break;
    case 12 : hexadecimal = "C";
    break;
    case 13 : hexadecimal = "D";
    break;
    case 14 : hexadecimal = "E";
    break;
    case 15 : hexadecimal = "F";
    break;
  }
  return hexadecimal;
}
int main(){

  cout <<hex(14);
  return 0;
}
