#include <iostream>

using std::cin;
using std::cout;

int main (){
    std::string cars[][3]={{"mazda","toyota","laguna"},
                        {"audi","bmw","dodge"},
                        {"rolsroys","bently","astonmartin"},
                        {"Buggati","Ferrari","Lambo"}};
    int row = sizeof(cars) / sizeof(cars[0]);
    int colomn = sizeof(cars[0]) / sizeof (cars[0][0]);
    for (int i = 0; i<row; i++){
        for (int j = 0; j< colomn; j++){
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }
}