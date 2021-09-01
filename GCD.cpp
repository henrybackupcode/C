#include <iostream>

using namespace std;

long long int gcd(long long int A, long long int B){
    if(B == 0){
        return A;
    }
    return gcd(B,A%B);
}

int main(){
    long long int A,B;
    cin >> A >> B;
    cout << gcd(A,B) << endl;
}
