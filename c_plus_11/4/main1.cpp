#include <iostream>
using namespace std;

int main()
{
    short months[12] = {1, 2};
    // 当初始化参数数量小于length时，会按照顺序赋值，然后将剩余的参数全部设置为0。
    cout << months[0] << ";" << months[1] << ";" << months[2] << endl;
    // 求序列长度
    int L = sizeof(months) / sizeof(short);
    cout << L << endl;
    return 0;
}