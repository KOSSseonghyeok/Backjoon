#include <iostream>
#include <string>

using namespace std;

int main(void){
    string a;
    bool boo = true;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(a[i] != a[a.length()-i-1]){
            boo = false;
        }
    }
    cout << boo << endl;
    
    
    return 0;
}