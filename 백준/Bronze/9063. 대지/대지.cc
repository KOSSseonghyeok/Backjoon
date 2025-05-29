#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int x1, y1;
    cin >> x1 >> y1;
    int max_x, max_y, min_x, min_y;
    max_x = x1, min_x = x1;
    min_y = y1, max_y = y1;
    n -= 1;
    while(n--){
        int x2, y2;
        cin >> x2 >> y2;
        if(x2 > max_x){
            max_x = x2;
        }else if(x2 < min_x){
            min_x = x2;
        }

        if(y2 > max_y){
            max_y = y2;
        }else if(y2 < min_y){
            min_y = y2;
        }
    }

    int sum = (max_x - min_x) * (max_y-min_y);
    cout << sum;
    return 0;
}