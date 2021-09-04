#include <iostream>
#include <string>
using namespace std;

int area(int l, int b)
{
    int result = l*b;
    return result;
}
float area(float len, float bre)
{
    float result = len*bre;
    return result;
}

int main()
{
    int l,b, answer;
    float len, bre, ans;
    std::string preference;
    cout << "Do you want to enter values in float or int: ";
    cin >> preference;
    if(preference == "float" || preference == "Float")
    {
        cout << "Enter Length: ";
        cin >> len;
        cout << "Enter breadth: ";
        cin >> bre;
        ans = area(len, bre);
        cout << ans;
    }
    else if(preference == "int" || preference == "Int")
    {
        cout << "Enter Length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
        answer = area(l, b);
        cout << answer;
    }
}