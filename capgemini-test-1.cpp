// merging two arrays
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v1{1, 4, 5};
    vector<int> v2{3, 6, 7};
    vector<int> merged;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int m = v1.size();
    int n = v2.size();
    int s = m<n?m:n;
    int i = 0;
    int j = 0;
    while (i<m && j<n){
        if(v1[i]<v2[j]){
            merged.push_back(v1[i++]);
        } else {
            merged.push_back(v2[j++]);
        }
    }

    while (i<m)
        merged.push_back(v1[i++]);
    while (j<n)
            merged.push_back(v2[j++]);

    for(int k : merged){
        std::cout<<k<<" ";
    }
    return 0;

}   