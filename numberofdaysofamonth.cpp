#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string monthname;
 
    //Reading a month number from user
 
   cout<<"Enter month name: ";
   cin>>monthname;
 
    switch(monthname)
    {
        case 'january': cout<<"31 days";
            break;
        case 'february': cout<<"28 or 29 days";
            break;
        case 'march': cout<<"31 days";
            break;
        case 'april': cout<<"30 days";
            break;
        case 'may': cout<<"31 days";
            break;
        case 'june': cout<<"30 days";
            break;
        case 'july': cout<<"31 days";
            break;
        case 'august': cout<<"31 days";
            break;
        case 'september': cout<<"30 days";
            break;
        case 'october': cout<<"31 days";
            break;
        case 'november': cout<<"30 days";
            break;
        case 'december': cout<<"31 days";
            break;
        default: cout<<"Invalid input!";
 
    }
    return 0;
 
}