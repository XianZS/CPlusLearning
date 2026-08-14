#include <iostream>
#define MAXSIZE 100
using namespace std;

void show_short_int_long_var()
{
    short score_short = 1.0;
    int score_int = 1;
    long score_long = 1;
    cout << score_short << endl;
    cout << score_int << endl;
    cout << score_long << endl;
}

void show_size_of()
{
    cout << "[short] >>> " << sizeof(short) << endl;
    cout << "[int] >>> " << sizeof(int) << endl;
    cout << "[long] >>>" << sizeof(long) << endl;
    cout << "[long] >>>" << sizeof(unsigned long long) << endl;
}

void pr_max_size()
{
    cout << MAXSIZE << endl;
}

void init_var()
{
    // 初始化变量number1
    int number1{1};
    // 初始化变量number2，当未指定数值时，会将其设置为0
    int number2{};
    cout << number1 << ";" << number2 << endl;
}

void show_unsigned_var()
{
    int var = 32767 + 10;
    short max_short1 = var;
    unsigned short max_short2 = var;
    cout << "[有符号short(max=32767)] >>>" << max_short1 << endl;
    cout << "[无符号short(max=65535)]" << max_short1 << endl;
}

void show_char_var()
{
    char ch{};
    cout << "[null char] >>> " << ch << endl;
}

void show_bool_var()
{
    bool judge1 = false;
    bool judge2 = true;
    cout << "[judge1] >>> " << judge1 << endl;
    cout << "[judge2] >>> " << judge2 << endl;
}

void show_const_var()
{
    const string name = "jom";
    cout << name << endl;
}

int main()
{
    show_short_int_long_var();
    show_size_of();
    pr_max_size();
    init_var();
    show_unsigned_var();
    show_char_var();
    show_bool_var();
    show_const_var();
    return 0;
}