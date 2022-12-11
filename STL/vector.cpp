// CPP program to illustrate
// Initializing of pair STL
#include <iostream>
// #include <utility>
#include <bits/stdc++.h>

using namespace std;

// Driver Code
int main()
{
    vector<int> v;
    cout << "Size-->" << v.capacity() << endl;
    v.push_back(1);
    cout << "Size-->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Size-->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Size-->" << v.capacity() << endl;
    cout << "Size-->" << v.size() << endl;
    cout << "Size-->" << v.at(2) << endl;
    cout << "Size-->" << v.front() << endl;
    cout << "Size-->" << v.back() << endl;

    return 0;
}
