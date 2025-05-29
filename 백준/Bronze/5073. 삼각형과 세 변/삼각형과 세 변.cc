#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(void){
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        if(a > b && a > c){
            if(a >= b+c){
                cout << "Invalid" << endl;
                continue;
            } 
        }else if(b > c && b > a){
            if(b >= a+c){
                cout << "Invalid" << endl;
                continue;
            }
        }else{
            if(c >= a+b){
                cout << "Invalid" << endl;
                continue;
            }
        }
        set<int> ls;
        ls.insert(a);
        ls.insert(b);
        ls.insert(c);
        if(ls.size() == 3){
            cout << "Scalene" << endl;
        }else if(ls.size() == 2){
            cout << "Isosceles" << endl;
        }else{
            cout << "Equilateral" << endl;
        }
    }
    return 0;
}