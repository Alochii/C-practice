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
std::string MonOut(monsters::Monsters mons){
	switch(mons){
		case 1: return "Orc";
		break;
		case 2: return "Leviathan";
		break;
		case 3: return "Beholder";
		break;
		case 4: return "Medusa";
		break;
		case 5: return "Djin";
		break;
		default: return "???";
	}
}
std::string Monleg(monsters::Monsters mons){
	switch(mons){
		case 1: return "2";
		break;
		case 2: return "0";
		break;
		case 3: return "16";
		break;
		case 4: return "0";
		break;
		case 5: return "1";
		break;
		default: return "???";
	}
}



int main()
{
	
	cout <<"the "<<MonOut (monsters::Orc)<<" has "<< Monleg(monsters::Orc)<<" legs";

    return 0;
}