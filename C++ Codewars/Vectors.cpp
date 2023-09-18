#include <iostream>
#include <vector>
#include <math.h>




using namespace std;

vector<uint64_t> powers_of_two(int n){
  vector<uint64_t>power;
  for (int i = 0; i< n; i++){
    power.push_back(pow(2,i));
  }
  return power;

}
int main(){
  vector<int>vcc;
  vcc.assign(9,1);
  for (int i=0; i<size(vcc); i++){
    cout << vcc[i] << '\n';
  }
  vcc.push_back(6);
 

  cout << "last item is : "<< vcc[vcc.size()-1];
  vcc.pop_back();
    cout << "last item is : "<< vcc[vcc.size()-1];
  vcc.insert(vcc.begin(), 5);
  cout << vcc[0];

return 0;
}