#include <iostream>
#include <cmath>

using namespace std;
int main(){
  int num = 1900;
  int calc =num % 100;
  calc == 0? cout << (num / 100) :cout << (num / 10) +1;
  return 0;
}