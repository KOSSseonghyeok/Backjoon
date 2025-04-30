#include <iostream>

using namespace std;

int main(void){
    int cnt;
    cin >> cnt;
    int minNum, maxNum;
    cin >> minNum;
    maxNum = minNum;
    int a;
    for(int i = 1; i < cnt; i++){
        cin >> a;
        if(minNum > a){
            minNum = a;
        }
        if(maxNum < a){
            maxNum = a;
        }
    }
    cout << minNum << " " << maxNum << endl;
    

    return 0;
}
