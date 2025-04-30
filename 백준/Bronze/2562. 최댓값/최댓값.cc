#include <iostream>

using namespace std;

int main(void){
    int cnt = 1;
    int i = 1;
    int b;
    int a[9];
    for(int i = 0; i < 9; i++){
        cin >> b;
        a[i] = b;
    }
    int maxNum = a[0];
    while(i < 9){
        if(maxNum < a[i]){
            maxNum = a[i];
            cnt = i+1;
        }
        i++;
    }
    cout << maxNum << endl;
    cout << cnt << endl;
    return 0;
}
