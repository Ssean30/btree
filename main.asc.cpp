#include <iostream>
#include "btree.hpp"
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    
    int search_num;
    BTree t(3);

    vector<int> d;
    for (int i = 0; i < 10000; i++){
        int a = rand() % 10000;
        d.push_back(a);
        sort(d.begin(), d.end());
        copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
        cout <<" "<< endl;
    }

    for (int i = 0; i< 10000; i++){
        t.insert(d[i]);
    }

    cout << "The B-tree is: ";
    t.traverse();
    cout << ""<< endl;

    cout << "NUMBER TO SEARCH:  ";
    cin >> search_num;
    int k = search_num;
    (t.search(k) != NULL) ? cout << endl
                    << k << " is found\n"
                : cout << endl
                    << k << " is not Found \n";

}

