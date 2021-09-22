#include <iostream>
#include <string>
using namespace std;
void combi(string a, int i, int s)
{
    if(i == s)
        cout<<a<<endl;
    else
    {
        for(int k = i; k <= s; k++)
        {
            //calculate permutations
            swap(a[i], a[k]);
            combi(a, i+1, s);
            swap(a[i], a[k]);
            // cout<<a<<endl;
        }
    }
}

int main()
{
    string str = "XYZ";
    // getline(cin, str);
    int n = str.size();
    combi(str, 0, n-1);
    return 0;
}