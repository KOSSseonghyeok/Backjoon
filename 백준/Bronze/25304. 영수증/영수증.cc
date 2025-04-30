#include <iostream>

using namespace std;

int main(void){
    int sum, cnt;
    cin >> sum >> cnt;
    int total = 0;
    while(cnt--){
        int money, karina;
        cin >> money >> karina;
        total += money * karina;
    }
    if(total == sum){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}