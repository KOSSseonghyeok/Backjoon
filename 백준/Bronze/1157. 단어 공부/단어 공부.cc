#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int b[26];
int main(void){
    string a;
    cin >> a;
    for(char& s : a){
        s = toupper(s);
    }
    
    for(char c : a){
        b[c - 65]++;
    }

    int max = -1;
    int cnt;
    bool mm = false;

    for(int x = 0; x < sizeof(b)/sizeof(int); x++){
        if(max < b[x]){
            cnt = x;
            mm = false;
            max = b[x];
        }
        else if(max == b[x]){
            mm = true;
        }
    }
    char i = cnt+65;
    if(mm == true){
        cout << '?' << endl;
    }
    else{
        cout << i << endl;
    }
    

    
    
    return 0;
}