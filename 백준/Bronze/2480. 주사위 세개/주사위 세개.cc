#include <iostream>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    int sum;
    int max=0;
    if(a == b && b == c){
        sum = 10000+a*1000;
    }
    else if(a == b || a == c){
        sum = 1000+100*a;
    }
    else if(b == c){
        sum = 1000+100*b;
    }
    else{
        if(max < a){
            max = a;
        }
        if(max < b){
            max = b;
        }
        if(max < c){
            max = c;
        }
        sum = max*100;
    }
    cout << sum;

    return 0;
}