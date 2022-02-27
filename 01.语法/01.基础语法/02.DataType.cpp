#include<iostream>  
#include<stdlib.h>
#include <limits>

using namespace std;

#define f(x) x*x

int main1()
{

#pragma region 枚举

    //定义枚举类型Days，并定义枚举变量day
    //enum days { one, two, three } day;
    
    //---------------------------------------
    enum Days { one, two =2 , three } ;
    //enum Days day = one;
    Days day = one;

   //数字强制转枚举类型
    Days day1 = (Days) 2;

    switch (day) {
    case one:
        cout << "one" << endl;
        break;
    case two:
        cout << "two" << endl;
        break;
    default:
        cout << "three" << endl;
        break;
    }

//--------------------------------------
    enum rank
    {
        first, second, third
    };

    int nRank = 1;//定义的整形
    switch (nRank)
    {
    case first:
        cout << "第一名" << endl;
        break;
    case second:
        cout << "第二名" << endl;
        break;
    case third:
        cout << "第三名" << endl;
        break;
    default:
        break;
    }

 //-------------------------------------------
    //enum Weekend { Zero, One, Two, Three, Four };
    enum Weekend { Zero, One=100, Two, Three, Four };//默认第一个下标为0，之后值加1；当出现赋值情况，当前值改变为赋值，后面的每个值，在此值基础加1
    int a, b, c, d, e;
    a = Zero;
    b = One;
    c = Two;
    d = Three;
    e = Four;
    cout << a << "," << b << "," << c << "," << d << "," << e << endl;

#pragma endregion
    cout <<  "-------------------------------分割线-------------------------------" << endl;
#pragma region 数据类型的长度

    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;

    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;

    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;

    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;

    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;

    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;

    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;

    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;

    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;

    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;

    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;

    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;

    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    cout << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************" << endl;
#pragma endregion

    cout << "-------------------------------分割线-------------------------------" << endl;

#pragma region xxx_t 类型
    int i;                   // 定义一个 int 类型的变量 i
    size_t size = sizeof(i);   // 用 sizeof 操作得到变量i的类型的大小，值为4
    // 这是一个size_t类型的值
    // 可以用来对一个size_t类型的变量做初始化

    i = (int)size;             // size_t 类型的值可以转化为 int 类型的值
    char nc = 'a';             // c 保存了字符 a，占一个字节
    wchar_t wc = L'a';         // wc 保存了宽字符 a，占两个字节
    // 注意 'a' 表示字符 a，L'a' 表示宽字符 a
    size_t size1 = sizeof(nc);//值为1
    size_t size2 = sizeof(wc);//值为2

    int arr[] = { 1,2,3,4,5 };   // 定义一个数组
    int* p1 = &arr[0];         // 取得数组中元素的地址，赋值给指针
    int* p2 = &arr[3];
    ptrdiff_t diff = p2 - p1;    // 指针的减法可以计算两个指针之间相隔的元素个数，值为3
    // 所得结果是一个 ptrdiff_t 类型

    i = (int)diff;             // ptrdiff_t 类型的值可以转化为 int 类型的值
#pragma endregion
    cout << "-------------------------------分割线-------------------------------" << endl;
#pragma region typedef 与  define 的区别

    //define 没有作用域的限制，只要是之前预定义过的宏，在以后的程序中都可以使用。 而 typedef 有自己的作用域
    int x = 6, y = 2, z;
    z = f(x) / f(y);
    printf("%d\n", z);//输出的结果为36，因为是简单的字符串替换

#pragma endregion


#pragma region 
    int n = 0;
    n--;
    unsigned int u = (unsigned int)n;
    unsigned long long int v = (unsigned long long int)n;
    cout << "Unsigned int value for " << n << " is " << u << "(0x"
        << hex << u << ")" << endl;
    cout << "0x" << u << " increase 1 is " << (u + 1) << endl;
    cout << "Unsigned long long int value for " << dec << n << " is " << v << "(0x"
        << hex << v << ")" << endl;
    cout << "0x" << v << " increase 1 is " << (v + 1) << endl;
#pragma endregion



    system("pause");//包含头文件 stdlib.h
    return 0;
}

