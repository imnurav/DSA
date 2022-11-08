#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
        {
            cin >> arr[i];
        }

        for (int i = sizeOfArray - 1; i >= 0; i--)
        {
            cout << arr[i]<<" ";
        }
    }
    return 0;
}