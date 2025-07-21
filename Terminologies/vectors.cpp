#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v);
int main() {
    vector<int> vec(3,5);
    printVector(vec);
    
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Max Size: " << vec.max_size() << endl;
    
    cout << "Is Empty before pop: " << vec.empty() << endl;
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    cout << "Is Empty after pop: " << vec.empty() << endl;
    
    cout << "Data: " << vec.data() << endl;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    cout << "Front: " << vec.front() << endl;
    cout << "Back: " << vec.back() << endl;
    
    printVector(vec);
    
    return 0;
}

void printVector(vector<int> v) {
    for(int val: v) {
        cout << val << " ";
    }
    cout << endl;
}