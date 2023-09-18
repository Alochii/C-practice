#include <cmath>
#include <iostream>
using namespace std;

int getheight(){
    cout << "Enter the height of the tower! :";
    float height;
    cin >> height;
    return height;
}

void getdist(int height){
    float dist=0.1;
    for (int i = 0; dist > 0; i++){
        dist = height - (9.8 * pow(i, 2)) /2;
        if (dist < 0) {
            cout << "the ball has hit the ground!";
            break;
        }
        cout << "At " << i<< " seconds, the ball is at height: " << dist << " meters"<< endl;
    }
}

int main(){
    getdist(getheight());
    return 0;
}