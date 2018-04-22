#include<iostream>

#include<fstream>

#include<math.h>

#include"elevator.cpp"

using namespace std;
int main()
{
   int n,i,j,moment[1000],k[1000],s[1000],currentfloor,destination,indicator,count,now;
   ifstream infile("input.txt");
   ofstream outfile("output.txt");
   infile>>n;
   for(i=0;i<n;i++)
	{
		infile>>moment[i];
		infile>>k[i];
		infile>>s[i];
	}
   now=moment[i]+k[i];
   outfile<<now<<" "<<k[0]<<endl;
	for(i=1;i<n;i++)
	{
		now=now+1+elevator[i].gotofloor(k[i-1],s[i-1]);
		if(now>=moment[i])
		{
			now=now+1+elevator[i].gotofloor(k[i],s[i-1]);
			k[i+1]=s[i];
			outfile<<now-1<<" "<<k[i]<<endl;
		}
		else
		{
			if(elevator[i].gotofloor(k[i],s[i])>(now-moment[i]))
			now=moment[i]+1+(elevator.gotofloor(k[i],s[i-1])-now+moment[i]);
			else
			now=now+moment[i]+1;
		k[i+1]=s[i];
			outfile<<now-1<<" "<<s[i]<<endl;
		}
	}
	return 0;
}
