#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int seats[size];

	cout << "Please enter seats" << endl;

	for (int index = 0; index < size; index++)
	{
		cin >> seats[index];

	}

	cout << "Please enter second seat information to be updated";

	for (int index = 0; index < size; index++)
	{

		int new_seat;

		cin >> new_seat;

		seats[1] = new_seat;
	}

	cout << "Updated seat is: ";
	for (int index = 0; index < size; index++)
	{
		cout << seats[index] << " ";
    }

	return 0;

	

	




}



