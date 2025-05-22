#include <iostream>

using namespace std;

int main(void){
    int n = 2;
    int r, c;
    cin >> r >> c;
    
    int** a = new int*[r];
    for(int i = 0; i < r; i++){
        a[i] = new int[c];
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int b;
            cin >> b;
            a[i][j] = b;
        }
        
    }

    int** k = new int*[r];
    for(int i = 0; i < r; i++){
        k[i] = new int[c];
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int b;
            cin >> b;
            k[i][j] = b;
        }
        
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            a[i][j] += k[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < r; i++){
        delete[] a[i];
        delete[] k[i];
    }
    delete[] a;
    delete[] k;



    return 0;
}