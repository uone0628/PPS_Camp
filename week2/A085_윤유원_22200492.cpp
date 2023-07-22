#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define N_MAX 1001 
#define STR_MAX 51
 
int str_cmp(const string& A, const string& B) {
    int A_size = A.size(), B_size = B.size();
    if (A_size != B_size) return A_size < B_size;
 
    int A_sum = 0, B_sum = 0;
    for (int i = 0; i < A_size; i++)
    {
        if ('0' <= A[i] && A[i] <= '9') A_sum += A[i] - '0';
        if ('0' <= B[i] && B[i] <= '9') B_sum += B[i] - '0';
    }

    if (A_sum != B_sum) return A_sum < B_sum;

    return A < B;
}
 
int main() {
    int N; 
    cin >> N; 

    string str_input[N_MAX];

    for (int i = 0; i < N; i++)
        cin >> str_input[i];

    sort(str_input, str_input + N , str_cmp);
 
    for (int i = 0; i < N; i++)
        cout << str_input[i] << "\n";

    return 0;
}
