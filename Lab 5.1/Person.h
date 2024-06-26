#pragma once
#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name, int age) {
        this->age = age;
        this->name = name;
    };
    string name;
    int age;
};

