// Menu Drive Program using do-while

#include <iostream>
using namespace std;

int main() {
    int a;
    char ch;
    cout<<"Menu Driven Program\n";
    do{
        cout<<"1.Coffee\n2.Tea\nPlease Enter Your Choice: ";
        cin>>a;
        
        if(a==1){
            cout<<"Please Enjoy Your Coffee.\n";
        }
        else if(a==2){
            cout<<"Please Enjoy Your Tea.\n";
        }
        else{
            cout<<"Wrong Input.\n";
        }
        cout<<"Want to continue (Y/N):";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    cout<<"Thank You";
    
    return 0;
}
