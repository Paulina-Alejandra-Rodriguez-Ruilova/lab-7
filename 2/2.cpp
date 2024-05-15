#include <iostream>
#include <vector>
#include <list>
#include <chrono>

using namespace std;
using namespace std::chrono;

void test_insert(int n) {
    list<int> l;
    vector<int> v;

    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        l.push_back(i);
    }
    auto end = high_resolution_clock::now();
    cout << "Inserting into the list: " << duration_cast<microseconds>(end - start).count() << " ISS" << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    end = high_resolution_clock::now();
    cout << "Inserting into a vector: " << duration_cast<microseconds>(end - start).count() << " ISS" << endl;
}

void test_erase(int n) {
    list<int> l;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        l.push_back(i);
        v.push_back(i);
    }

    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        l.pop_back();
    }
    auto end = high_resolution_clock::now();
    cout << "Removing from the list: " << duration_cast<microseconds>(end - start).count() << " ISS" << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        v.pop_back();
    }
    end = high_resolution_clock::now();
    cout << "Deleting from a vector: " << duration_cast<microseconds>(end - start).count() << " ISS" << endl;
}

int main() {
    int n = 1000000;

    test_insert(n);
    cout << endl;
    test_erase(n);

    return 0;
}