#include <iostream>
#include <random>

using std::cout; using std::endl; using std::cin;


int getrandom(int min, int max){                         // generate a random number
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; // get 8 integers of random numbers from std::random_device for our seed
	std::mt19937 mt{ ss }; // initialize our Mersenne Twister with the std::seed_seq
	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution die6{ min, max }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
	return die6(mt);
}

int getinput(){
	int guess;
	while (true){
		cin >> guess;
		if (!std::cin){// has a previous extraction failed?
				// yep, so let's handle the failure
				std::cin.clear(); // put us back in 'normal' operation mode
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
			}
		if ((guess > 0) && (guess <= 100)){
			return guess;
		}
		cout << "you've entered an invalid number";
	}
}

int main()
{
	int tries;
	int number;
	int guess;
	
	cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." <<endl;
	while (true){
		tries = 7;
		number = getrandom(1,100);
		while ( tries > 0){
			getinput();
			if (guess == number){
				cout << "that is correct!!" <<endl<< "enter anything to play again";
				break;
			}
			tries--;
			if (tries == 0){
				cout << "you ran out of attempts, the number was "<<number<<endl<<"enter anything to play again";
				break;
			}
			if (guess > number){
				cout << "you need to guess lower"<<endl;
			}
			else if (guess <number){
				cout << "you need to guess higher"<<endl;
			}
		}
	cin >> guess;	// Reset game
	}
	return 0;
}