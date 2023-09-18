#include <iostream>
using namespace std;
int main()
{
	double ret, ret2;
	double intr = 0.12;
	double invs= 2000;

	int sum = 0, sum2 = 0;
	for (int i = 0; i<65; i++){
		if (i<7){
		sum2 += invs;
		}
		sum +=invs;
		ret = sum * intr;
		ret2 = sum2 * intr;
		sum += ret;
		sum2 += ret2;
		cout << "after "<<i+1<< " year :"<< sum <<" vs "<< sum2 << endl;
	}
	
	return 0;
}