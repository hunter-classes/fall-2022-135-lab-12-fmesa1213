#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(vector<int> v) {
    vector<int> result;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > 0)
            result.push_back(v[i]);
    }
    return result;
}
