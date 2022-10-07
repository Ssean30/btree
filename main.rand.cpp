#include <iostream>
#include "btree.hpp"
using namespace std;



int ascending() {
    
    int search_num;
    BTree t(3);

    for (int i = 0; i < 100000; i++){
        t.insert(rand() % 10000);
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
                

    return 0;
}






int main() {
    
    int search_num;
    BTree t(3);

    for (int i = 0; i < 100000; i++){
        t.insert(rand() % 10000);
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

