#include <iostream>
using namespace std;
class TwoToOne{


static std::string longest(const std::string &s1, const std::string &s2){
    string test = s1+s2;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string alphaOut= alphabet;
    for (int i = 0; i < 26; i++)
         if (test.find(alphabet[i]) == -1){
            alphaOut.replace(alphaOut.find(alphabet[i]),1,"");
         }
    return alphaOut;
}
};

int main(){
    string a = "xyaabbbccccdefww";
    string b = "xxxxyyyyabklmopq";
    string test = a+b;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string alphaOut= alphabet;
    for (int i = 0; i < 26; i++)
         if (test.find(alphabet[i]) == -1){
            alphaOut.replace(alphaOut.find(alphabet[i]),1,"");
         }
    cout << alphaOut<<endl;
    //cout <<TwoToOne.longest("hello","shjit");
    return 0;
}/*
using std::string;
class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      string test = s1+s2;                  // just make them one long string.
      string alphabet = "abcdefghijklmnopqrstuvwxyz";     // The alphabet in a string format.
      string alphaOut= alphabet;                    // Output string. will omit the letters i find from the alphabet.
      for (int i = 0; i < 26; i++)                            //cycle through the alphabet letters
         if (static_cast<int>(test.find(alphabet[i])) == -1){           //If you don't a letter from the alphabet
            alphaOut.replace(alphaOut.find(alphabet[i]),1,"");          //remove that letter from the output string.
         }
      return alphaOut;
    }
};
*/