#include <iostream>
#include <vector>
using namespace std;

bool isValidWalk(std::vector<char> walk) {
 int a=0, b=0, c=0;
  for (int i = 0; i<50; i++){
    if (walk[i] != 'n' && walk[i] != 's' && walk[i] != 'w' && walk[i] != 'e'){
      break;
    }
    c+=1;
    switch (walk[i]){
      case 'n': b +=1;
      break;
      case 's': b -=1;
      break;
      case 'e': a +=1;
      break;
      case 'w': a -=1;
      break;
    }
  }
  if (a == 0 && b == 0 && c == 10){
    return true;
  }
  else{
    return false;
  }
}


int main(){
  std::vector<char> walk{'n','s','n','s','n','s','n','s','n','s'};
  isValidWalk(walk) ? cout << "valid" : cout << "invalid";

}