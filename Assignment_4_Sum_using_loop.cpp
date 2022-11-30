// Sum of natural numbers

#include <iostream>
using namespace std;

int main() {
    int a,sum=0,b;
    cout<<"Enter natural number: ";
    cin>>b;
    a=b;
    do{
        sum=b+sum;
        b=b-1;
    }while(b>0);
    cout<<sum<<" is the sum of all natural numbers till "<<a;
    
    return 0;
}
