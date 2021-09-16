//wap to count the number of vowels, consonants, digits, special characters, symbols
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[150];
    int i, vowels, consonants, digits, spaces, symbols;
    std::cout<<"\nEnter the string : ";
    vowels = consonants = digits = spaces = symbols = 0;

    cin.getline(str, 150);

    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
        str[i]=='o' || str[i]=='u' || str[i]=='A' ||
        str[i]=='E' || str[i]=='I' || str[i]=='O' ||
        str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            ++digits;
        }
        else if (str[i]==' ')
        {
            ++spaces;
        }
        else
        {
            ++symbols;
        }
    }

        std::cout<< "Vowels: " << vowels << endl;
        std::cout<< "Consonants: " << consonants << endl;
        std::cout<< "Digits: " << digits << endl;
        std::cout<< "White spaces: " << spaces << endl;
        std::cout<< "Symbols: " << symbols << endl;

        return 0;


}