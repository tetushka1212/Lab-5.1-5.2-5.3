﻿// Lab 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <algorithm>
#include"Triangle.h"
using namespace std;

template <typename T>
void Sort(T* a, size_t size) 
{ 
    sort(a, a + size);
}

int main()
{
 /*   const size_t n = 4, m = 5, l = 4;
    int IntArr[n] = { 5,2,4,7 };
    double DoubleArr[m] = { 3.14, 1.414, 2.718, 2.5, 1.732 };
    string StringArr[l] = { "apple", "orange", "banana", "kiwi" };

    Sort(IntArr, n);
    Sort(DoubleArr, n);
    Sort(StringArr, n);

    for (const auto& num : IntArr)
    {
        cout << num << " ";
    }
    cout << std::endl;

    for (const auto& num : DoubleArr)
    {
        cout << num << " ";
    }
    cout << std::endl;

    for (const auto& str : StringArr)
    {
        cout << str << " ";
    }
    cout << std::endl;*/

    int s1 = 9, s2 = 40, s3 = 6;
    try
    {
        Triangle t(s1, s2, s3);
        cout << t.Area() << endl;
    }
    catch (const string& e) { cout << e << endl; }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
