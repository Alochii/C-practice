#include <cmath>
#include <iostream>
using namespace std;

int countSquares(int cuts){
  int num = cuts + 1;
  int fins = (pow(num, 2)* 6) - (num * 8) - ((num - 2) * 4); ;
  return fins;
}
int main(){
    cout << countSquares(0);

    return 0;
}




/*int subtr(int cuts);

int countSquares(int cuts){
  int num = pow(cuts+1, 3) + subtr(cuts);
  return num;
}
int subtr(int cuts){
  int sub = 0;
  for (int i = cuts-2; i>=0; i-=2){
    sub -= countSquares(i);
  }
  return sub;
}

int main(){
    cout << countSquares(12321);

    return 0;
}
*/
