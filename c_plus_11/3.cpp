#include <iostream>
#include <string>
#include <cstring>
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

void show_var_type_transfer()
{
    float num{1.23};
    int number = int(num);
    cout << number << endl;
}

void show_string()
{
    string nums{"My name is jom"};
    cout << "[nums] >>> " << nums << endl;
    cout << "[nums_3] >>> " << nums[3] << endl;
    // C++11 新增特性-原始字符串
    // 被关键字“R(字符串)”标识的字符串之中的所有特殊字符都不再生效，比如\n。
    cout << R"(\t\t\t)" << endl;
}

struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};

void show_struct()
{
    inflatable inf{"披萨", 2.2, 15.68};
    cout << inf.name << endl;
    cout << inf.volume << endl;
    cout << inf.price << endl;
    inflatable infs[2]{{"披萨", 2.2, 15.68},
                       {"饼子", 1.0, 3.5}};
    cout << infs[1].name << endl;
}

int main()
{
    // show_short_int_long_var();
    // show_size_of();
    // pr_max_size();
    // init_var();
    // show_unsigned_var();
    // show_char_var();
    // show_bool_var();
    // show_const_var();
    // show_var_type_transfer();
    // show_string();
    // show_struct();
    return 0;
}