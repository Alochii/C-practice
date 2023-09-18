#include <string>
#include <iostream>
using namespace std;
int find_short(std::string str)
{
  int track{0};
  int min{999};
  cout << str << endl;
  for (int i=0; i<str.length();i++){
    track++;
    cout << i << " , "<< track <<endl;
    if (str[i]==' ' || i == str.length()-1){   
        if (i==str.length()-1){
            track++;
        }
      track -1 < min? min = track -1: min *=1;
      track = 0;
    }
  }
  return min;
}
int main(){
    string str = "Let's travel abroad shall we";
    cout << find_short(str);
    return 0;
}