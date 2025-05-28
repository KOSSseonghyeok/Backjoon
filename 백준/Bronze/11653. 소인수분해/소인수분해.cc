#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int num;
    cin >> num;
    vector<int> ls;
    int i = 2;
    if(num == 1){
        return 0;
    }
    while(i <= num){
        if(num % i == 0){
            ls.push_back(i);
            num /= i;
        }
        else{
            i++;
        }
    }

    for(int i = 0; i < ls.size()-1; i++){
        cout << ls[i] << endl;
    }
        cout << ls[ls.size()-1];

    return 0;
}