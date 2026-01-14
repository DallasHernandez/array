#include <iostream>
using namespace std;

int main()
{

    const int size = 5;
    int distance[size];

    cout << "please enter distance readings" << endl;
    
    for (int index = 0; index < size; index++)
    {
        cin >> distance[index];

    }
    

    int first_reading = distance[0];
    int last_reading = distance[size - 1];

    for (int index = 0; index < size; index++)
    {
        cout << " data readings printed to computer in index " << index << " : ";

        cout << distance[index] << "  " << endl;
    }
    return 0;

}


