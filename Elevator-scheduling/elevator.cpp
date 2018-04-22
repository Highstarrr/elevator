#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
class elevator
{
	public:
		int currentfloor,indicator;
		queue<int>destination;
		int gotofloor();
		int stop();
		int updatedestinationqueue();
}
int elevator::gotofloor(int currentfloor,int destination)
{
	currentfloor=abs(currentfloor-destination);
	return currentfloor;
}
int elevator::stop(int currentfloor,int destination)
{
	if(currentfloor==destination)
     time++;
	 return time;	
}
int elevator::updatedestinationqueque(int number,int currentfloor,int destination )
{
	if(currentfloor==destination)
		number--;
		return 0;
}
