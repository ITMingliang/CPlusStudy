#include<iostream>  
#include<stdlib.h>
#include <limits>

using namespace std;

#define f(x) x*x

int main1()
{

#pragma region ö��

    //����ö������Days��������ö�ٱ���day
    //enum days { one, two, three } day;
    
    //---------------------------------------
    enum Days { one, two =2 , three } ;
    //enum Days day = one;
    Days day = one;

   //����ǿ��תö������
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

    int nRank = 1;//���������
    switch (nRank)
    {
    case first:
        cout << "��һ��" << endl;
        break;
    case second:
        cout << "�ڶ���" << endl;
        break;
    case third:
        cout << "������" << endl;
        break;
    default:
        break;
    }

 //-------------------------------------------
    //enum Weekend { Zero, One, Two, Three, Four };
    enum Weekend { Zero, One=100, Two, Three, Four };//Ĭ�ϵ�һ���±�Ϊ0��֮��ֵ��1�������ָ�ֵ�������ǰֵ�ı�Ϊ��ֵ�������ÿ��ֵ���ڴ�ֵ������1
    int a, b, c, d, e;
    a = Zero;
    b = One;
    c = Two;
    d = Three;
    e = Four;
    cout << a << "," << b << "," << c << "," << d << "," << e << endl;

#pragma endregion
    cout <<  "-------------------------------�ָ���-------------------------------" << endl;
#pragma region �������͵ĳ���

    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
    cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;

    cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
    cout << "\t���ֵ��" << (numeric_limits<char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;

    cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
    cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;

    cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
    cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;

    cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
    cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
    cout << "\t���ֵ��" << (numeric_limits<short>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;

    cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
    cout << "\t���ֵ��" << (numeric_limits<int>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
    cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;

    cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
    cout << "\t���ֵ��" << (numeric_limits<long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;

    cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
    cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;

    cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
    cout << "\t���ֵ��" << (numeric_limits<double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;

    cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
    cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;

    cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
    cout << "\t���ֵ��" << (numeric_limits<float>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;

    cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
    cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;

    cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
    cout << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************" << endl;
#pragma endregion

    cout << "-------------------------------�ָ���-------------------------------" << endl;

#pragma region xxx_t ����
    int i;                   // ����һ�� int ���͵ı��� i
    size_t size = sizeof(i);   // �� sizeof �����õ�����i�����͵Ĵ�С��ֵΪ4
    // ����һ��size_t���͵�ֵ
    // ����������һ��size_t���͵ı�������ʼ��

    i = (int)size;             // size_t ���͵�ֵ����ת��Ϊ int ���͵�ֵ
    char nc = 'a';             // c �������ַ� a��ռһ���ֽ�
    wchar_t wc = L'a';         // wc �����˿��ַ� a��ռ�����ֽ�
    // ע�� 'a' ��ʾ�ַ� a��L'a' ��ʾ���ַ� a
    size_t size1 = sizeof(nc);//ֵΪ1
    size_t size2 = sizeof(wc);//ֵΪ2

    int arr[] = { 1,2,3,4,5 };   // ����һ������
    int* p1 = &arr[0];         // ȡ��������Ԫ�صĵ�ַ����ֵ��ָ��
    int* p2 = &arr[3];
    ptrdiff_t diff = p2 - p1;    // ָ��ļ������Լ�������ָ��֮�������Ԫ�ظ�����ֵΪ3
    // ���ý����һ�� ptrdiff_t ����

    i = (int)diff;             // ptrdiff_t ���͵�ֵ����ת��Ϊ int ���͵�ֵ
#pragma endregion
    cout << "-------------------------------�ָ���-------------------------------" << endl;
#pragma region typedef ��  define ������

    //define û������������ƣ�ֻҪ��֮ǰԤ������ĺ꣬���Ժ�ĳ����ж�����ʹ�á� �� typedef ���Լ���������
    int x = 6, y = 2, z;
    z = f(x) / f(y);
    printf("%d\n", z);//����Ľ��Ϊ36����Ϊ�Ǽ򵥵��ַ����滻

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



    system("pause");//����ͷ�ļ� stdlib.h
    return 0;
}

