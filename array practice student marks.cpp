#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int student_marks[size];

    cout << "Input : ";

    for (int index = 0; index < size; index++)
    {
        cin >> student_marks[index];

    }

    cout << "Output : " << student_marks[2];

    return 0;


}

