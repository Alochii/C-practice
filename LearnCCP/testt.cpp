#include <iostream>
using namespace std;

int main(){
    int runcount=0;
    for (int i =0; i<8; i++){
        cout <<"i :"<< i<< endl;
        runcount+=1;
        cout <<"runcount :" <<runcount<<endl;
        if (runcount > 4){
            break;
        }
    }
    
   


    return 0;
}