#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class Array {
private:
    T*              _elements;
    unsigned int    _size;

public:
    Array() : _elements(NULL), _size(0) {}

    Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

    Array(const Array& other) : _elements(NULL), _size(0) {
        if (other._size > 0) {
            _elements = new T[other._size]();
            _size = other._size;
            for (unsigned int i = 0; i < _size; i++) {
                _elements[i] = other._elements[i];
            }
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] _elements;
            _elements = NULL;
            _size = 0;

            if (other._size > 0) {
                _elements = new T[other._size]();
                _size = other._size;
                for (unsigned int i = 0; i < _size; i++) {
                    _elements[i] = other._elements[i];
                }
            }
        }
        return *this;
    }

    ~Array() {
        delete[] _elements;
    }

    T& operator[](unsigned int index) {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _elements[index];
    }

    const T& operator[](unsigned int index) const {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _elements[index];
    }

    unsigned int size() const {
        return _size;
    }
};

#endif
