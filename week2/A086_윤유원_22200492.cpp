#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>
#include <math.h>
#include <algorithm>
#include <functional>
using namespace std;

string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

bool compare(const string& a, const string& b) {
    for(int i = 0; i < min(a.length(), b.length()); i++) 
    {
        if(a[i] == b[i]) continue;
        return arr[a[i] - '0'] < arr[b[i] - '0'];
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> arr;
    
    for(int i = N; i <= M; i++)
        arr.push_back(to_string(i));

    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i];
        (i + 1) % 10 == 0 ? cout << "\n" : cout << " ";
    }

    return 0;
}