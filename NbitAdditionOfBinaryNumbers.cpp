// consider the problem of adding  n bit binary integers , stored in two n elements arrays A and B.The sum of two integers should be stored in binary form in an (n+1) elements array C.State problem formly and write algorithm

#include <bits/stdc++.h>
using namespace std;

void binaryAddition(int A[], int B[], int n, int C[]) {
    int carry = 0;
    for(int i = n - 1; i >= 0; i--) {
        int sum = A[i] + B[i] + carry;
        if(sum <= 1) {
            C[i + 1] = sum;
            carry = 0;
        }
        else if(sum == 2) {
            C[i + 1] = 0;
            carry = 1;
        }
        else {
            C[i + 1] = 1;
            carry = 1;
        }
    }
    if(carry == 1)
        C[0] = 1;
    else
        C[0] = 0;
}

int main() {
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    int A[n], B[n], C[n + 1];
    cout << "Enter the first binary number: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Enter the second binary number: ";
    for(int i = 0; i < n; i++)
        cin >> B[i];
    binaryAddition(A, B, n, C);
    cout << "The sum of the binary numbers is: ";
    for(int i = 0; i < n + 1; i++)
        cout << C[i] << " ";
    return 0;
}
