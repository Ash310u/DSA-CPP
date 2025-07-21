#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v);
int main() {
    vector<int> vec(3,5);
    printVector(vec);
    
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
    
    cout << "--------------------------------" << endl;
    vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    // When we use push_back, the capacity of the vector gets doubled(size * 2)
    // this is the reason the vector size is 3 but capacity is 4
    cout << "Size: " << vec2.size() << endl;
    cout << "Capacity: " << vec2.capacity() << endl;
    
    return 0;
}

void printVector(vector<int> v) {
    for(int val: v) {
        cout << val << " ";
    }
    cout << endl;
}