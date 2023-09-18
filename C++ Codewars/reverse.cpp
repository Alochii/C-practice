#include <string>
#include <iostream>

using namespace std ; 


string reverseString (string rev){
    char temp;
  int s = (int) rev.length();
  for (int i = 0; i < s /2 ; i++){
    temp = rev[i];
    rev [i] = rev[ s - i -1];
    rev [ s - i -1] = temp;
    cout << rev << endl;
  }
  return rev;
}
  

int main(){
    cout << reverseString ("bullcraps");

    return 0;
}