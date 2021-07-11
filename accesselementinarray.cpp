#include <iostream>
using namespace std;
int main()
{
    int i, size;

    cout << "Enter the size of the array : " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the numbers you want to store in the array : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is : [ ";

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
