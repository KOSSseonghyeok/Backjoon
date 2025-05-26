#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    int s;
    int n;
    cin >> s >> n;
    string sum;
    if(n < 10){
        while(s > 0){
            sum = to_string(s%n) + sum;
            s /= n;
        }
    }
    else{
        while(s > 0){
            if(s%n > 9){
            char B = 'A'-10+(s%n);
            sum = B + sum;
            s /= n;
        }
        else{
            sum = to_string(s%n) + sum;
            s /= n;
        } 
        }
    }

    cout << sum << endl;

    return 0;
}