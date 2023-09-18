#include <stdio.h>
int main(){
    float fahr, cels;
    int lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while(fahr <= upper){
        cels = (fahr-32) * 5 / 9;
        printf("%4.0f\t%6.2f\n", fahr, cels);    
        fahr += step;
    }
    return 0;
}