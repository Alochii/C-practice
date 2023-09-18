#include <iostream>
#include <string>

std::string repeat_str(int repeat,std::string str) {
  int k = (int)repeat;
  std::string result;
  for (int i = 0; i < k; i++){
    result = result + str;
  }
  return result;
}
int main(){
  std::cout << repeat_str(2,"fuck");

  return 0;
}

