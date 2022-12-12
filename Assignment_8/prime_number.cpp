#include <iostream>
using namespace std;

int main()
{
    int a,b=0;
    cout<<"Enter an number: ";
    cin>>a;
    
    for (int i=2;i<=a/2;i++){
        if(a%i==0){
            b=b+1;
            break;
        }
    }
    
    if (b>0){
        cout<<a<<" isn't a prime number.";
    }
    else{
        cout<<a<<" is a prime number.";
    }
    
    return 0;
}
