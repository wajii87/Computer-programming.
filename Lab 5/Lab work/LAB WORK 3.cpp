#include <iostream>
using namespace std;

int main()
{
    int password;

    do
    {
        cout << "Enter password (1234 to exit): ";
        cin >> password;

    } while(password != 1234);

    cout << "Access Granted";

    return 0;
}
