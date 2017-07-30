#include <iostream> //DYNAMIC ARRAYS

using namespace std;

const int CAPACITY = 1000;

void main()
{
	int *dArray;
	dArray = new int[CAPACITY];

	dArray[0] = 3;
	dArray[1] = 7;
	dArray[2] = 2;
	dArray[3] = 9;

	cout << "Array: ";

	for (int i = 0; i < 4; i++)
	{
		cout << dArray[i] << " "; //note no dereference operator needed
	} //==> 3 7 2 9

	delete [] dArray; //deletes all values contained in array, [] only needed for arrays
	dArray = NULL;	
	
	system("pause");
}