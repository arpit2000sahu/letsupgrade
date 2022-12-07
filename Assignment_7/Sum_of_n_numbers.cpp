#include <iostream>
using namespace std;
int n;
int total(int a[],int n) //function to add the array elements
{
    int sum=0;
    for(int i=0; i< n; i++) //loop to add array elements
    {
        sum = sum + a[i];
    }
    return sum; //returning sum value
}

int main() {
    int n,a[n];
    cout<<"Number of elements:";
    cin>>n;
    
    cout<<"Enter the value of each elements:\n";
    for(int i=0; i<n; i++) //loop to take user input of array elements
    {
        cin>>a[i];
    }
    int result = total(a,n); //calling external function with parameter
    cout<<"Sum of all elements: "<<result; //printing the obtained result

    return 0;
}
