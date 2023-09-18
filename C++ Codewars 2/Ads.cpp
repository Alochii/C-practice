#include <iostream>
using namespace std;
struct adViews{
	int numFromAds;
	int incomeFromAds;
	double percentageOfViews;
};

void viewAd(adViews adnum){
	cout << "the number of ads displayed is : " << adnum.numFromAds <<endl;
	cout << "the income from every viewed ad is : $" << adnum.incomeFromAds<<endl;
	cout << "the percentage of ads that were viewed was : %" <<adnum.percentageOfViews *100<<endl;
	cout << "the total amount of momney you made was : $" << adnum.numFromAds * adnum.incomeFromAds * adnum.percentageOfViews<<endl;
}

int main(){
	viewAd({800,2,0.08});


	return 0;
}