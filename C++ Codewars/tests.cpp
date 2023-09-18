#include <iostream>

using namespace std;

unsigned int hotpo(unsigned int n){
  int num = 0;
  while (n != 1){
    if (n % 2 == 0){
      n /= 2;
      num +=1;
    }
    else if (n%2 !=0){
      n= n*3 +1;
      num +=1;
    }
  }
  if(n == 0) return 0; //Optional Handler to n = 0
  else{
    return num;
  }
}
int main(){
cout << hotpo(15);
 return 0;
}
