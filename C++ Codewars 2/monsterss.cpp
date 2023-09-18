#include <iostream>
#include <cmath>
using namespace std;

namespace monsters{
	enum Monsters{
	Orc = 1,
	Leviathan,
	Beholder,
	Medusa,
	Djin,
	};
}


int main()
{
    monsters::Monsters Monmon {monsters::Djin};
	cout << Monmon;

    return 0;
}