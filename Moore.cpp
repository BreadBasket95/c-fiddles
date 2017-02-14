#include "MOORE.h"
#include <iostream>

using namespace std;

Moore::Moore(int size)
{
	arrPtr = new double[size];
	arrSize = size;
}
void Moore::elementStorage(int position, double value)
{
	arrPtr[position] = value;
}
double Moore::average()
{
	double total = 0;
	for (int count = 0; count < 5; count++)
	{
		total += arrPtr[count];
	}
	return (total / 5);
}
double Moore::getElement(int position)
{
	return arrPtr[position];

}
double Moore::highestValue()
{

	double temp = arrPtr[0];
	
	for (int count = 0; count < arrSize; count++)
	{
		if (arrPtr[count] > temp)
			temp = arrPtr[count];
	}
	return temp;
}
double Moore::lowestValue()
{
	double temp = arrPtr[0];

	for (int count = 0; count < arrSize; count++)
	{
		if (arrPtr[count]<temp)
			temp = arrPtr[count];
	}
	return temp;

}