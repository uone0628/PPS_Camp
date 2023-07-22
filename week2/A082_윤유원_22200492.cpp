#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<pair<int, string>> v;

int compare(const pair<int, string> &a, const pair<int, string> &b) {
    return a.first < b.first;
}

int main() {
    cin >> N;
    
    for(int i = 0; i < N; i++) 
    {
        int age;
        string name;
    
        cin >> age >> name;
        v.push_back({age, name});
    }
    
    stable_sort(v.begin(),v.end(),compare);
    
    for(int i = 0; i < N; i++) 
        cout << v[i].first << " " << v[i].second << endl;
    
    return 0;
}