#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter the number of Fibonacci Terms required:";
    cin>>num;
    
    int arr[num],a;
    
    arr[0] = 0;
    arr[1] = 1;
    
    cout<<"Fibonacci Series of "<<num<<" numbers: ";
    cout << arr[0] << ", " << arr[1] << ", ";
    
    for(int i = 2; i < num; i++){
        a = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = a;
        cout << a << ", ";
    }

    return 0;
}
