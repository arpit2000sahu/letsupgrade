#include <iostream>
using namespace std;
int add(int a, int b){
     int result = a+b;
     return result;
}

int sub(int a, int b){
     int result = a-b;
     return result;
}

int multi(int a, int b){
     int result = a*b;
     return result;
}

int division(int a, int b){
     int result = a/b;
     return result;
}

int main(){
    int a,b,c;
    char ch;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    do{
        cout<<"1 Addition\n2 Substration\n3 Multiplication\n4 Division\nPlease Enter the operation:";
        cin>>c;
        
        if (c==1){
            cout<<add(a,b);
        }
        else if(c==2){
            cout<<sub(a,b);
        }
        else if(c==3){
            cout<<multi(a,b);
        }
        else if(c==4){
            cout<<division(a,b);
        }
        else{
            cout<<"Wrong Input";
        }
        
        cout<<"\nIf you want to continue plz enter the choice again (Y/N):";
        cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    return 0;
}
