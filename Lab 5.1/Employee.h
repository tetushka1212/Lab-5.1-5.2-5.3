#pragma once
#include "Person.h"
class Employee :
    public Person
{
public:
    int salary;
    Employee(string name, int age, int new_salary) : Person(name, age) 
    { 
        this->salary = new_salary; 
    };

};

