#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    string s;
    int n;
    cin >> s >> n;
    int sum = 0;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] <= 'Z' && s[i] >= 'A'){
            sum += (s[i]-'A'+10)*pow(n, s.length()-1-i);
        }
        else{
            sum += (s[i] - '0')*pow(n, s.length()-1-i);
        }
    }   
    cout << sum << endl;



    return 0;
}