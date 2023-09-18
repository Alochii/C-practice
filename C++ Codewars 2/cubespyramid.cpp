#include <iostream>
#include <cmath>
using namespace std;
int lowhigh(long long m){
    long long int maths{9223372036854775807};
    int i {0};
    for (i=75000; maths > m; i-=5000){
        maths = (pow(i,2) * pow(i+1,2)) / 4;
        cout <<"maths : "<<maths<<" , i : "<<i<<endl;
    }
    return i+5000;
}
static long long findNb(long long m){
      long long maths{0};
      for (int i = lowhigh(m); m > maths; i++){
        maths = ((i*i) * (i+1)*(i+1)) / 4;
        cout <<maths<<endl<<i<<endl;
        if (maths == m){
            return i;
        }
    }
    return -1;
}
  
  

int main(){
    cout << findNb(2304422822859502500);

    return 0;
}
    
    
    
