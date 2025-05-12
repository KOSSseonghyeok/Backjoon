#include <iostream>
#include <string>

using namespace std;

int main(void){
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.length(); i++){
        cnt++;
        if(a[i] == '=' || a[i] == '-'){
            if(i > 1 && a[i-1] == 'z' && a[i-2] == 'd'){
                cnt -= 2;
                
            }
            else{
                cnt--;
            }
        }
        else if(a[i] == 'j'){
            if(i > 0 && (a[i-1] == 'l' || a[i-1] == 'n')){
                cnt--;
            }
    }   
}
    cout << cnt << endl;
   
    return 0;
}
