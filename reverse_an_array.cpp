#include <iostream>
using namespace std;
  
int main(){
    int in[500], reverse[500], count, i;
      
    cout << "Enter number of elements in array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i = 0; i < count; i++){
        cin >> in[i];
    }
      
    for(i = 0; i < count; i++){
        reverse[i] = in[count-i-1];
    }    

    cout << "Reversed Array\n";
    for(i = 0; i < count; i++){
        cout << reverse[i] << " ";
    }
          
    return 0;
}