#include <iostream>

using std::cin;
using std::cout;

int main(){
    std::string prices[] = {"rock","paper","scissors"};
    cout << sizeof(prices)/sizeof(std::string) << '\n';
    std::string sentence = "man this sucks and is hard but i will persevere";
    std::string paragraph = "it is hard but man must endure. as no man can change for either better or worse without feeling the pain of changing, for he is both the sculptor and the marble.";
    cout << sizeof(sentence) << '\n';
    cout << sizeof(paragraph);
    return 0;
}