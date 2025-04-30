#include <iostream>

using namespace std;

int main(void){
    int num, cnt;
    cin >> num;
    cin >> cnt;
    int* a = new int[num];
    for(int i =0; i < num; i++){
        a[i] = i+1;
    }

    while(cnt--){
        int n, j;
        cin >> n >> j;
        int tmp;
        tmp = a[n-1];
        a[n-1] = a[j-1];
        a[j-1] = tmp;
    }
    for(int i = 0; i < num; i++){
        cout << a[i] << " ";
    }
    cout << "" << endl;

    return 0;
}