#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "I am a student.";
    cout << str1 << endl;
    string str2, str3;
    // C++ 读取整行
    getline(cin, str2, ';');
    getline(cin, str3, ';');
    cout << str2 << endl;
    cout << str3 << endl;
    // C++
    return 0;
}