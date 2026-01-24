#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> freq;
    freq[1]++;
    freq[2] += 2;

    cout << freq[2];
}
