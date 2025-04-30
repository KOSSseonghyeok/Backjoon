#include <iostream>

using namespace std;

int main(void){
    int num, cnt;
    cin >> num;
    cin >> cnt;
    int* a = new int[num];
    for(int i =0; i < num; i++){
        a[i] = 0;
    }

    while(cnt--){
        int min, max, number;
        cin >> min >> max >> number;
        for(int i = min-1; i < max; i++){
            a[i] = number;
        }
    }
    for(int i = 0; i < num; i++){
        cout << a[i] << " ";
    }
    cout << "" << endl;

    return 0;
}