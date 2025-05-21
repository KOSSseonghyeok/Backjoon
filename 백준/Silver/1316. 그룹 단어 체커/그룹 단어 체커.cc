#include <iostream>
#include <string>

using namespace std;

int main(void){
    int numTestCase;
    cin >> numTestCase;
    int cnt = 0;
    while(numTestCase--){
        string s;
        cin >> s;
        bool result = false;
        char* ls = new char[s.length()];
        for(int i = 0; i < s.length(); i++){
            ls[i] = '0';
        }

        char temp = s[0];
        for(char i : s){
            for(int k = 0; k < s.length(); k++){

                if(ls[k] == '0'){
                    ls[k] = i;
                    temp = i;
                    break;
                }

                if(ls[k] == i){
                    if(temp == i){
                    continue;
                    }
                    else{
                        result = true;
                        break;
                    }
                }
            }

            if(result){
                break;
            }
        }
        if(result){
            continue;
        }
        cnt++;
        delete[] ls;
    }
    cout << cnt << endl;
    

    return 0;
}