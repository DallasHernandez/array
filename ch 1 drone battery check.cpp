#include <iostream>
using namespace std;

int main()
{
  
	const int size = 5;
	int battery[size];

	cout << "Please enter battery percentage" << endl;

	for (int index = 0; index < size; index++)
	{
		cin >> battery[index];

	}

	cout << "Battery: ";

	for (int index = 0; index < size; index++)
	{
		cout << "the battery percentage is : " << battery[index] << endl;


	}

	int low_count = 0;

	for (int index = 0; index < size; index++)
	{
		if (battery[index] < 20)
		{
			cout << "Low readings" << low_count << endl;

		}
		return 0;
	}




}


