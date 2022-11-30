//  Hollow Rectangle Pattern

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"Enter number of rows & coloumn:";
    cin>>r>>c;
    for(int i=1; i<=c; i++)
    {
        for(int j=1; j<=r; j++)
        {
            if(i==1 || i==c || j==1 || j==r)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }

        cout<<"\n";
    }
    
    return 0;
}
