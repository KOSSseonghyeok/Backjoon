#include <iostream>

using namespace std;

int main(void){
    int** a = new int*[9];
    for(int i = 0; i < 9; i++){
        a[i] = new int[9];
    }
    int maxNum = -1;
    int r, c;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int b;
            cin >> b;
            a[i][j] = b;
            if(maxNum < b){
                maxNum = b;
                r = i;
                c = j;
            }
        }
    }
    cout << maxNum << "\n" << r+1<< " " << c+1;

    for(int i = 0; i < 9;i++){
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
