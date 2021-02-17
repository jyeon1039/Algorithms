#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    
    cin >> str;
    
    int reverse0 = 0;
    int reverse1 = 0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i] != str[i+1]){
            if(str[i] == '1')
                reverse1++;
            else
                reverse0++;
        }
    }
    
    if(reverse1 > reverse0)
        cout << reverse0;
    else
        cout << reverse1;
        
    cout << "\n";
    
}