//wap to count the number of characters, words, lines when multiple lines are entered.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[200];
    int line=0, word=0, ch=0;
    std::cout<<"\nEnter the string and end it with ~ : ";
    // cin.get(str, 200);
    scanf("%[^~]", str);
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='\n')
        {
            line++;
            word++;
        }
        else 
        {
            if(str[i]==' '||str[i]=='\t')
            {
                word++;
                ch++;
            }
            else {
                ch++;
            }
        }
    }

    cout<<"Character count: "<<ch<<endl;
    cout<<"Word Count: "<<word<<endl;
    cout<<"Line count: "<<line<<endl;

    return 0;
}