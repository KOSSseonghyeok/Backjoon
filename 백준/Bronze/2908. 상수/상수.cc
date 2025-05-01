#include <iostream>
#include <string>

using namespace std;

int main(void){
    string a, b;
    cin >> a >> b;
    string ra, rb;
    for(int i = a.length()-1, j = 0; i >= 0; i--, j++){
        ra +=  a[i];
        rb +=  b[i];
    }
    int resultA = stoi(ra);
    int resultB = stoi(rb);
    
    if(resultA > resultB){
        cout << resultA << endl;
    }
    else{
        cout << resultB << endl;
    }
    return 0;
}