#include <string>
#include <iostream>

using namespace std;

std::string no_space(std::string& x){
  while (x.find(" ") < x.length()){
    x.erase(5,2);
    cout << "hello";
  }