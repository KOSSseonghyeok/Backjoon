#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string num;
    cin >> num;
    vector<int> ls;
    string sol;
    for(char s : num){
        ls.push_back(s - '0');
    }
    
    sort(ls.begin(), ls.end(), greater<>());
    for(int j : ls){
        sol+=to_string(j);
    }
    cout << sol;


    

    return 0;
}