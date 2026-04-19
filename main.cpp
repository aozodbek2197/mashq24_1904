// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "a1b2c3";
    for(char c : s)
        if(isdigit(c))
            cout << c << " ";
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    for(int x : v)
        if(prime(x)) cout << x << " ";
}
