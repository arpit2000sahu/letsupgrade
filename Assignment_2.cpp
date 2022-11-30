//Swaping two user input number

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;

    cout << "Before swapping a = " << a << " and b = " << b << endl;
    temp = b;
    b = a;
    a = temp;
    cout << "After swapping a = " << a << " and b = " << b << endl;
    
    return 0;
}
