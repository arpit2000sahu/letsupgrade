#include <iostream>
using namespace std;

int main() {
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]= {{10,11,12},{13,14,15},{16,17,18}};
    int c[3][3];

    int row1 = (sizeof(a)/sizeof(a[0]));  
    int col1 = (sizeof(a)/sizeof(a[0][0]))/row1;  
      
    int row2 = (sizeof(b)/sizeof(b[0]));  
    int col2 = (sizeof(b)/sizeof(b[0][0]))/row2;  
      
    if(col1 != row2){  
        cout<<"Matrices cannot be multiplied \n";  
    }  
    else{  
        int prod[row1][col2];  
        
        for(int i = 0; i < row1; i++){  
            for(int j = 0; j < col2; j++){  
                prod[i][j] = 0;  
                for(int k = 0; k < row2; k++){  
                   prod[i][j] = prod[i][j] + a[i][k] * b[k][j];   
                }  
            }  
        }  
          
        cout<<"Product of two matrices: \n";  
        for(int i = 0; i < row1; i++){  
            for(int j = 0; j < col2; j++){  
               cout<< prod[i][j] <<"\t";  
            }  
            cout<<("\n");  
        }  
    }  
    return 0;  
}  
