#include <iostream>
#include <cmath>

using namespace std;

int main(){
   int first;
   int second;
   int third;
   cin >>first;
   cin >> second;
   cin >> third;
   int S = (first+second+third) /2;
   double area = sqrt(S*(S-first)*(S-second)*(S-third));
   cout << area;
   return 0;
}