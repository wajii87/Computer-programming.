#include <iostream>
using namespace std;
 
int main()
{
    int num, i = 1, sum = 0;
    
	cout << "Enter a positive integer: ";
	cin >> num;

while(i <= num)
{
      sum= sum + i;
      i++;
}
    cout << "Sum = " << sum << endl;
    return 0;
}

