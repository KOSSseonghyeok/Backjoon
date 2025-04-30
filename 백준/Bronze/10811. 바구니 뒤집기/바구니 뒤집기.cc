#include <iostream>

using namespace std;


int main(void){
    int n, m;
    cin >> n >> m;
    int* a = new int[n+1];
    for(int i = 0; i < n+1; i++){
        a[i] = i;
    }

    while(m--){
        int min, max;
        cin >> min >> max;
        int tmp;
        for(int i = 0; i < (max-min)/2+1; i++){
            tmp = a[min+i];
            a[min+i] = a[max-i];
            a[max-i] = tmp;
        }
    }
    for(int i = 1; i < n+1; i++){
        cout << a[i] << " ";
    }
    cout << "" << endl;
    return 0;
}