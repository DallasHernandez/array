#include <iostream>
using namespace std;

void count_passed(int marks[], int size);

int main()
{
	const int size = 5;
	int marks[size] = { 35,78,40,22,90 };

	count_passed(marks, size);

	return 0;


   
}
void count_passed(int marks[], int size)
{
	int passed_count = 0;

	for (int index = 0; index < size; index++)
	{
		if (marks[index] >= 40)
		{
			passed_count++;
		}
	}
	cout << "Passed Students: " << passed_count << endl;
}