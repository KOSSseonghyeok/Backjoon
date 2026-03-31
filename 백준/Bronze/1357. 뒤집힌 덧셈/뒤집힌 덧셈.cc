#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rev(int x);

int main(void){
    int a, b;
    cin >> a >> b;
    cout << rev((rev(a) + rev(b)));

    
    return 0;
}

int rev(int x){
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return stoi(s);
}