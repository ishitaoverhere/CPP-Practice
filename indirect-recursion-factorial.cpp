#include <iostream>
using namespace std;
int f(int);
int f2(int);
// int n=0;
// // declaring functions
// void foo1(void);
// void foo2(void);

// void foo1() 
// { 
//   if (n <= 20) 
//   { 
//     cout<<n<<" ";  
//     n++;           
//     foo2();       
//   } 
//   else
//     return; 
// } 

// void foo2() 
// { 
//   if (n <= 20) 
//   { 
//     cout<<n<<" "; 
//     n++;           
//     foo1();       
//   } 
//   else
//     return; 
// } 

// int main() 
// { 
//   foo1(); 
//   return 0; 
// } 

int f(int n){
    if(n<=1)
        return 1;
    else
        return n*f2(n-1);
}

int f2(int n){
    if(n<=1)
        return 1;
    else
        return n*f(n-1);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial is: " << f(number);
    return 0;
}