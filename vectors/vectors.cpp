#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << v[0] << endl;       // 10
    cout << v.at(1) << endl;    // 20

    // Traverse vector
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Size of vector
    cout << v.size() << endl;

    // Remove last element
    v.pop_back();

    // Insert at specific position
    v.insert(v.begin() + 1, 15);

    // Erase element
    v.erase(v.begin());

    // Final vector
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
