#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    vector<int> res;
    int sum;
    for(int i = 0;i<v1.size() || i<v2.size();i++){
        sum = 0;
        if(i<v1.size()){
            sum += v1[i];
        }
        if(i<v2.size()){
            sum += v2[i];
        }
        res.push_back(sum);
    }
    return res;
}
