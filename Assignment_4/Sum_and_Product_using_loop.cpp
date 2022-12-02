// Sum & Product of natural numbers

#include <iostream>
using namespace std;

int main() {
    int a,sum=0,product=1,b;
    cout<<"Enter natural number: ";
    cin>>b;
    a=b;
    do{
        sum=b+sum;
        product=b*product;
        b=b-1;
    }while(b>0);
    cout<<sum<<" & "<<product<<" are the sum & product of all natural numbers till "<<a;
    
    return 0;
}
