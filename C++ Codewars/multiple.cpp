#include <iostream>

using namespace std;

int solution(int number) 
{
  int sum = 0;
  for (int i = number; i > 0; i--){
    if (i %3 == 0 || i %5 == 0){
        cout << i << endl;

        sum+=i;
        cout << sum << endl;
    }
  }
  return sum;
}

int main(){
    solution(10);

    return 0;
}