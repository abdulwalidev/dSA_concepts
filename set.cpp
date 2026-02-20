/h
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(3);   // ignored

    for(int x : s) cout << x << " ";
}
