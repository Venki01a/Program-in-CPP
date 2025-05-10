#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {30000, 50000, 90000, 40000, 30000, 70000};
    int n;
    cout << "Enter the Branch code";
    cout << "Enter 1 for Mech."
         << " "
         << "Enter 2 for Ec"
         << " "
         << "Enter 3 for DS"
         << " "
         << "Enter 4 for IOT"
         << " "
         << "Enter 5 for IT"
         << " "
         << "Enter 6 for AI: " << endl;

    cin >> n;
    switch (n)
    {
    case 1:
        cout << arr[n - 1];
        break;
    case 2:
        cout << arr[n - 1];
        break;
    case 3:
        cout << arr[n - 1];
        break;
    case 4:
        cout << arr[n - 1];
        break;
    case 5:
        cout << arr[n - 1];
        break;
    case 6:
        cout << arr[n - 1];
        break;
    default:
        cout << "invalid choice";
        break;
    }
}