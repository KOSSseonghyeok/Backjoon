#include <iostream>

using namespace std;

int main(void){
    int num;
    cin >> num;

    int* a = new int[num];
    int b;
    int cnt = 0;
    int n;
    for(int i = 0; i < num; i++){
        cin >> b;
        a[i] = b;
    }
    
    cin >> n;
    for(int i = 0; i < num; i++){
        if(n == a[i]){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
