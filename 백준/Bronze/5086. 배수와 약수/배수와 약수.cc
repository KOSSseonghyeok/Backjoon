#include <iostream>
#include <string>

using namespace std;

int main(void){
    int a, b;
    while(cin >> a >> b){
    string s;
    if(a > b){//a가 약수는 아님
        if(a % b == 0){
            s = "multiple";
        }
        else{
            s = "neither";
        }
    }
    else if(a < b){
        if(b % a == 0){
            s = "factor";
        }
        else{
            s = "neither";
        }
    }

    cout << s << endl;
    }
    return 0;
}
    