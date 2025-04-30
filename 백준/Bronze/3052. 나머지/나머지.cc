#include <iostream>

using namespace std;


int main(void){
    
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = -1;
    }
    int num;
    for(int j = 0; j < 10; j++){
    cin >> num;
    num %= 42;
    for(int i = 0; i < 10; i++){
        if(a[i] == num){
            break;
        }
        if(a[i] == -1){
            a[i] = num;
            break;
        }
    }
    }
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] != -1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}