#include<iostream>
using namespace std;

int main(){
    int num,num1,i;
    cout<<"Array Size: ";
    cin>>num;
    int arr[num];
    cout<<"Elements of an array: ";
    for(i=0; i<num; i++){
        cin>>arr[i];
    }

    cout<<"\nEnter the element you want to search for: ";
    cin>>num1;
    for(i=0; i<num; i++){
        if(arr[i]==num1){
            cout<<"The element "<<num1<<" is present at position "<<i+1;
            break;
        }
    }
        if (i == num){
            cout<<"The element "<<num1<<" is not present in the array";
        }
    return 0;
}
