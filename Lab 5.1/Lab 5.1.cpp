// Lab 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <algorithm>
#include "Triangle.h"
#include <vector>
#include "Employee.h"
#include "Array.h"
#include <set>
#include <string>
#include <sstream>



template <typename T>
void Sort(T* a, size_t size) 
{ 
    sort(a, a + size);
}

set<string> CountUniqueWords(const string& text) {
    set<string> unique_words;
    string word;
    istringstream iss(text);
    while (iss >> word) {
        for (char& c : word) {
            if (ispunct(c)) {
                c = ' ';
            }
            else {
                c =tolower(c);
            }
        }
        unique_words.insert(word);
    }

    return unique_words;
}

class IsPrime {
public:
    bool operator()(int n) const {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
};



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
    cout << std::endl; // 5.1

    int s1 = 9, s2 = 40, s3 = 6;
    try
    {
        Triangle t(s1, s2, s3);
        cout << t.Area() << endl;
    }
    catch (const string& e) { cout << e << endl; } // 5.2 (Triangle.h)

    vector<Person> people{ {"Michal", 20 }, { "Ann", 7 }, { "Bob", 19 }, { "Molly", 30 }, { "Jett", 16 } };
    auto filter 
    { []( vector<Person>& input) 
        {
        vector<Person> res;
        for (const Person& person : input) {
            if (person.age > 18) {
                res.push_back(person);
            }
        }
        return res;
        } 
    };

    auto Adults = filter(people);
    for (const Person& person : Adults) {
        cout << "Name: " << person.name << ", Age: " << person.age << endl; // 5.3 (Person.h)
    }


    vector<Employee> employees = { {"Bob", 25, 35000}, {"Jett", 30, 45000},
                                        {"Rick", 28, 40000}, {"Morty", 33, 50000} };

    int minSalary = 39000;

    auto FilterBySalary = [minSalary](const vector<Employee>& vec)
        {
            vector<Employee> result;
            copy_if(vec.begin(), vec.end(), back_inserter(result), [minSalary](const Employee& emp)
                {
                    return emp.salary > minSalary;
                });
            return result;
        };
    for (const auto& emp : FilterBySalary(employees))
    {
        cout << "Name: " << emp.name << ", Age: " << emp.age << ", Salary: " << emp.salary << endl; } //5.4 (Employee.h) 
    Array<string> arr(3, "qwqw");
    cout << arr << endl;
    arr[2] = "10";
    cout << arr << endl;
    Array<string> coppied_arr = arr;
    cout << arr; //5.5 (Array.h)


    string text = "Get, propeller, prop, get, more";
    auto unique_words = CountUniqueWords(text);
    cout << unique_words.size();//5.6 

    vector<int> numbers = { 2, 3, 37, 5, 6, 7, 8, 9, 10, 11 };

    int countPrimes = count_if(numbers.begin(), numbers.end(), IsPrime());

    cout << "Amount of prime numbers: " << countPrimes << endl; //5.7  */





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
