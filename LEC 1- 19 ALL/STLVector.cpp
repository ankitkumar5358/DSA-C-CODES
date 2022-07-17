#include <iostream>
#include <vector>

using namespace std;

int main() {

      vector <int> v;
      cout << "Capacity is " << v.capacity();

      cout << endl;

      v.push_back(1);
      v.push_back(2);
      cout << "2nd Capacity is " << v.capacity() << endl;
      cout << v.front() << endl;
      cout << v.back() << endl;

      cout << v.pop_back() << endl;
      cout << "Capacity after pop is " << v.capacity();




      return 0;
}