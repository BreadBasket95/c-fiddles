#include "MOORE.h"
#include <iostream>
using namespace std;

int main()
{


	double tempArr[5] = { 1, 5, 3.3, 2.2, 7.7 };
	Moore demonstrate(5);
	for (int count = 0; count < 5; count++)
	{
		demonstrate.elementStorage(count, tempArr[count]);
	
	}
	
	int want;
	cout << "Enter the subscript of the value you want" << endl;
	cin >> want;
	cout << "The value you want is " << demonstrate.getElement(want) << endl;
	cout << "The highest number is " << demonstrate.highestValue() << endl;
	cout << "The average number is " << demonstrate.average() << endl;
	cout << "The lowest number is " << demonstrate.lowestValue() << endl;

	
	system("pause");
	return 0;
}