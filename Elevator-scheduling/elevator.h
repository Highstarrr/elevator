#ifndef elevator
#define elevator
class elevator
{
	public:
		int currentfloor,indicator;
		queue<int>destination; 
		int gotofloor();
		int stop();
		int updatedestinationqueue();
};
