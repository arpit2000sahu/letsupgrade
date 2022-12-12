#include <iostream>

using namespace std;

int main()
{
    int a,b=1;
    cout<<"Enter an number: ";
    cin>>a;
    
    for (int i=2;i<=a;i++){
            b=b*i;
        
    }
    
    if(a>0){
        cout<<b<<" is the factorial of "<<a;
    }
    else{
        cout<<"Negative number don't have a factorial";
    }
    return 0;
}
