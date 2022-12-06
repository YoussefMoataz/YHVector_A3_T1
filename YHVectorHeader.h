//
// Created by Youssef Moataz on 12/6/2022.
//

#ifndef YHVECTOR_A3_T1_YHVECTORHEADER_H
#define YHVECTOR_A3_T1_YHVECTORHEADER_H

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

// Classes, Functions declaration
template<typename T>
class YHVector {
private:

public:
// Constructors and Big 4
    YHVector(int); // Initialize by specific capacity
// No content is added, size = 0
// Assign a default size value
    YHVector(T *, int n); // Initialize by n items from array
    YHVector(const YHVector &); // Initialize with a copy
    ~YHVector(); // Delete allocated memory
    YHVector &operator=(const vector<T> &); // Copy assignment
    YHVector &operator=(const vector<T> &&); // Move assignment
// Access operations
    T &operator[](int); // Access item by reference
// Throw an exception if out of range
// Modifying operations
    int push_back(T); // Add item to end of vec & return # of items
// Increase capacity of needed
    T pop_back(); // Remove and return last element in vec
    void erase(T::iterator); // Remove item at iterator
// Throw exception if invalid iter
    void erase(T::iterator1, T::iterator2);// Remove items between
// iterator 1 <= iterator 2 otherwise do nothing
// Throw exception if any iterator outside range
    void clear(); // Delete all vector content
    void insert(T::iterator, T); // Insert item at iterator
// Throw exception if invalid
// Iterators // Supports *, + and ++ operations at least
// Can use: typedef T* iterator
// Or u can use std::iterator so you can
// apply STL algorithms on XYVector
    T::iterator begin(); // Return an iterator (T*)
    T::iterator end(); // Return an iterator (T*)
// Comparison operations
    bool operator==(const YHVector<T> &); // Return true if ==
    bool operator<(const YHVector<T> &); // Compares item by item
// Return true if first different item in this is < in other
// Capacity operations
    int size(); // Return current size of vec
    int capacity(); // Return size of current allocated array
    int resize(); // Relocate to bigger space
    bool empty(); // Return true if size is 0
// Friends
    friend ostream &operator<<(ostream &out, YHVector<T>);
};

#endif //YHVECTOR_A3_T1_YHVECTORHEADER_H

// End of the file