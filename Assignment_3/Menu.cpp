// Menu Drive Program

#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Menu Driven Program\n";
    
    cout<<"1.Coffee\n2.Tea\nPlease Enter Your Choice: ";
    cin>>a;
    
    if(a==1){
        cout<<"Please Enjoy Your Coffee.";
    }
    else{
        cout<<"Please Enjoy Your Tea.";
    }
    
    return 0;
}
