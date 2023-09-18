#include <iostream>

namespace first{
    int x = 5;
}
namespace wrong{
    int x = 17;
}
int main(){
    using std::cout;
    using namespace first;

    cout << x;

    return 0;
}