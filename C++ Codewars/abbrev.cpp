#include <string>
#include <iostream>
using namespace std;

string abbrevName(string name)
{
  char s = name[0];
  char a = name[name.find(" ") + 1];
  string ret = "";
  ret.push_back(s);
  ret.push_back('.');
  ret.push_back(a);
  return ret;
}

int main(){

    cout << abbrevName("sugar tits");
    return 0;
}