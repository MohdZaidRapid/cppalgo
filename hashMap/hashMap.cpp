#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    // 2
    pair<string, int> pair2("love", 2);

    m.insert(pair2);

    // 3
    m["mera"] = 1;
    // what will you do
    m["mera"] = 2;

    // search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout << m.at("unknownkey") << endl;
    cout << m["unknownkey"] << endl;
    cout << m.at("unknownkey") << endl;

    cout << m.size() << endl;

    cout << m.count("bro") << endl;
    cout << m.count("love") << endl;

    m.erase("love");
    cout << m.size() << endl;

    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // iterator
    unordered_map<string,int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}