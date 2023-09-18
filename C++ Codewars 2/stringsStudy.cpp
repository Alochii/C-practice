#include <iostream>
using std::string;
using std::cout;
using std::endl;
int main(){
    string str = "hello world!";
    cout <<"str :"<< str <<endl;
    cout <<"lengthh :"<<str.length()<<endl;
    cout <<"size :"<<str.size()<<endl;
    cout <<"contanetaion : "<<str+" "+str<<endl;
    str.append(" now we're moving!");
    cout <<"str appended :"<< str <<endl;
    str.empty()? cout << "this string is empty" : cout <<"this string isn't empty"<<endl;
    str.clear();
    str.empty()? cout << "this string is empty"<<endl: cout <<"this string isn't empty"<<endl;
    str = "hello world a second time";
    string str2 ="this is a dud!";
    cout <<"the first string is :"<<str<<endl;
    cout <<"the second string is :"<<str2<<endl;
    swap(str,str2);
    cout <<"the first string is :"<<str<<endl; // this is a dud!
    cout <<"the second string is :"<<str2<<endl;
    cout <<"the value at index 3 in the string is : "<<str[3]<<endl;
    cout <<"the letter S is at index : " <<str.find("s")<<endl;
    str[3] = str[10];
    cout <<"the value at index 3 in the string is : "<<str[3]<<endl;
    string newstring = str + str[3];
    cout <<"new string is : "<<newstring<<endl;
    cout <<"substring starting from 5th position is : "<<newstring.substr(5,9)<<endl;
    cout <<"the letter at index 5 is : " <<str.at(5)<<endl;
    cout <<"newstring before : "<<newstring;
    newstring.replace(4,5,"");
    cout <<", now newstring is :"<<newstring<<endl;
    
    return 0;
}