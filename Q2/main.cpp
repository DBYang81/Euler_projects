#include <iostream>
#include <vector>
using namespace std;
int main() {
    int sum = 0;
    int j = 0;
    vector<int> vec = {1,2};
    for(int i = 2; j < 4000000; i++) {
        vec[i] = vec[i - 2] + vec[i - 1];
        if(vec[i] > 4000000){
            j = vec[i];
        }else{
            vec.push_back(vec[i]);
            j = vec[i];
        }
    }
    for(int &elem : vec){
        if(elem % 2 == 0){
            sum = sum + elem;
        }
    }
    cout << sum << endl;
    return 0;
}
