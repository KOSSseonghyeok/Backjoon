#include <iostream>
#include <string>

using namespace std;

int main(void){
    string a[5];
    for(int i = 0; i < 5; i++){
        string s;
        cin >> s;
        a[i] = s;
    }


    string sum;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(a[j].length() <= i){
                continue;
            }
            sum += a[j][i];
            
        }
    }

    cout << sum << endl;


    return 0;
}