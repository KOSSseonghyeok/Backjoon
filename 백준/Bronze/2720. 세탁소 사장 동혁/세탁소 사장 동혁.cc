#include <iostream>

using namespace std;

int main(void){
    int Test;
    cin >> Test;
    while(Test--){
        int c;
        cin >> c;
        int q = 0, d = 0, n = 0, p = 0;
        while(c > 0){
            if(c - 25 >= 0){
                q += 1;
                c -= 25;
            }
            else if(c - 10 >= 0){
                d += 1;
                c -= 10;
            }
            else if(c - 5 >= 0){
                n += 1;
                c -= 5;
            }
            else{
                p += 1;
                c -= 1;
            }
        }
        cout << q << " " << d << " " << n << " " << p << endl; 

    }



    return 0;
}
    
