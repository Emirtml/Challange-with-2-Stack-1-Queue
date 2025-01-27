#include <stack>
#include <iostream>
using namespace std;


void print(stack <int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}


int main()
{
    stack <int> s1, s2;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    print(s1);

    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }

    int front = s2.top();
    //cout << front;

    print(s2);





}

