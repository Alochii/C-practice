#include <iostream>
using namespace std;
class Arge
{
  public:
  static int fuckme(int p0, double percent, int aug, int p){
    int tracker{0};
    do{
        p0 = (p0 * percent) + p0 + aug;
        tracker++;
    }while ( p0 < p);
    return tracker;
  }
};
int main(){
    int p0 = 1000;
    double percent = 0.02;
    int aug = 50;
    int p = 1200;
    cout << Arge::fuckme(p0,percent,aug,p);
    return 0;
}