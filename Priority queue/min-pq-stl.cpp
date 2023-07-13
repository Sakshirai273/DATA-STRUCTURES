#include <iostream>
using namespace std;
#include <queue>
int main() {
priority_queue<int, vector<int>, greater<int>> p;
p.push(165);
p.push(165);
p.push(78);
p.push(4);
p.push(23);
p.push(38);

cout << p.size() << endl;
cout << p.empty() << endl;
cout << p.top() << endl;
while (!p.empty()) {
cout << p.top() << endl;
p.pop();
}
}