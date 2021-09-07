#include <iostream>  
using namespace std;  

int main()  
{  
    int arr[50], number, i;    
    cin>>number;    
    for(i=0; number>0; i++)                     //i>=0 not giving feasible results
    {    
        arr[i]=number%2;    
        number= number/2;  
    }    
        
    for(i=i-1; i>=0; i--)    
    {    
        cout<<arr[i];    
    }    
}  