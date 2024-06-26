#pragma once
#include <iostream>
using namespace std;
template <typename T1>
class Array
{
private:
    T1* arr;
    int size;

public:
    Array() {
        arr = nullptr;
        size = 0;
    }

    Array(int size, T1 default_value) {
        this->size = size;
        arr = new T1[size];
        for (int i = 0; i < size; i++) {
            arr[i] = default_value;
        }
    }

    ~Array() {
        delete[] arr;
    }

    void resize(int new_size) {
        T1* new_arr = new T1[new_size];
        int min_size = min(size, new_size);
        for (int i = 0; i < min_size; i++) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
        size = new_size;
    };

    T1& operator[](int index) {
        return arr[index];
    };

    friend ostream& operator<<(ostream& out, const Array<T1>& a) {
        for (int i = 0; i < a.size; i++) {
            out << a.arr[i] << " ";
        }
        return out;
    }

    Array(const Array& other) {
        size = other.size;
        arr = new T1[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] arr;
            size = other.size;
            arr = new T1[size];
            for (int i = 0; i < size; i++) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }
};

