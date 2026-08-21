#include <iostream>
#include <limits>
using namespace std;

// add function need two input's var
int add(int a, int b);
int main()
{
    int a, b, res;
    cout << "hello" << endl;
    cin >> a >> b;
    res = add(a, b);
    cout << res;
    return 0;
}
int add(int x, int y)
{
    return x + y;
}