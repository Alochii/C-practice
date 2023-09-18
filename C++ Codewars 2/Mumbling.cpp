#include <iostream>
#include <string>

using std::endl;
using std::string;
using std::cout;

static std::string accum(const std::string &s){
    string outString {};
    string temp {};
    for (int i = 0; i<s.length(); i++){
        for (int j = 0; j < i+1; j++){
            temp = s.at(i);
            if (j == 0){
            temp = toupper(temp[0]);
            }
            outString.append(temp);
        }
    }
    return outString;
}
int main(){
   /* string str = "hellothere";
    string outString {};
    string temp {};
    for (int i = 0; i<10; i++){
        for (int j = 0; j < i+1; j++){
            temp = str.at(i);
            if (j == 0){
            temp = toupper(temp[0]);
            }
            outString.append(temp);
        }
    }
    cout << outString;
    */
    //cout << accum("fasds");
    string sas = "helloo";
    cout << sas.length();
    return 0;
}
/*
using namespace std;
class Accumul
// what a nightmare. i'm struggling with manipulating strings.
{
public:
    static std::string accum(const std::string &s){
      string outString {};
      string temp {};
      for (int i = 0; i<static_cast<int>(s.length()); i++){ // for every letter in the string
        for (int j = 0; j < i+1; j++){                      // print the letter i number of times.
            temp = tolower(s.at(i));                        // set it to lower case
            if (j == 0){                                    // set the first instance of a letter to upper case
            temp = toupper(temp[0]);
            }
            outString.append(temp);                         // append the result to an output string
        }
        if (i != static_cast<int>(s.length()) -1 ){         //the very end of the string doesn't need a dash.
          outString.append("-");
        }
      }
      return outString;                                     //done
    }
};
*/