// Odd-Even Program

#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Please Enter A Number: ";
    cin>>a;
    
    if(a%2==1){
        cout<<a<<" is a odd number.";
    }
    else{
        cout<<a<<" is an even number.";
    }
    
    return 0;
}
