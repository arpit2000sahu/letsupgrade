#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter length of Array ";
    cin>>num;
    
    int arr[num];
    
    cout<<"Enter values of array";
    int len= sizeof(arr)/sizeof(int);
    for (int i=0;i<len;i++){
        cin>>arr[i];
    }
    
    int val,s,mid,e;
    cout<<"Enter number you want to search ";
    cin>>val;
    s=0;
    e=len-1;
    int x=-1;
    while(s<=e){
        mid=(s+e)/2;
        
        if (arr[mid]==val){
            x=1;
            break;
        }
        else if (arr[mid]>val){
            e=mid-1;
        }
        else if (arr[mid]<val){
            s=mid+1;
        }
    }
    if(x==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<mid+1;
    }
    return 0;
}
