#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int cnt = 2;
    int sum = 0;
    while(n--){
        cnt += cnt-1;
        sum = cnt*cnt;
    }
    cout << sum;



    return 0;
}
    
