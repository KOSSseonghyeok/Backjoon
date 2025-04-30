#include <iostream>

using namespace std;

int main(void){
    int num;
    
    int a[28];
    for(int i = 0; i < 28; i++){
        cin >> num;
        a[i] = num;
    }
    
    
    for(int i = 1; i <= 30; i++){
        bool boo = false;
        for(int j = 0; j < 28; j++){
            if(a[j] == i){
                boo = 1;
                break;
            }
        }
        if(boo == 0){
            cout << i << endl;
        }
    }

    return 0;
}