#include <iostream>

using namespace std;


int main(void){
    int cnt;
    cin >> cnt;
    double* a = new double[cnt];
    double num;
    for(int i = 0; i < cnt; i++){
        cin >> num;
        a[i] = num;
    }

    double max = a[0];
    for(int i = 1; i < cnt; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    for(int i = 0; i < cnt; i++){
        a[i] = a[i]/max*100;
    }
    double sum = 0;
    for(int i = 0; i < cnt; i++){
        sum += a[i];
    }
    cout << sum/cnt << endl;
    delete[] a;
    return 0;
}