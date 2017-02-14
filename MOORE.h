//MOORE, MARC 2-9-17

#ifndef MOORE_H
#define MOORE_H

using namespace std;
class Moore
{
private:
	double *arrPtr = nullptr;
	int arrSize;
	
public:
	Moore(int);
	void elementStorage(int, double);
	double getElement(int);
	double highestValue();
	double lowestValue();
	double average();
	~Moore()
	{
		delete arrPtr;
	};
};

#endif