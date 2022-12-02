//Solid Rectangle

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"Enter number of rows & coloumn:";
    cin>>r>>c;
    for(int j=0; j<c; j++){
        cout<<"\n";
        for (int i=0; i<r; i++){
            cout<<"*";
        }
    }
    
    return 0;
}
