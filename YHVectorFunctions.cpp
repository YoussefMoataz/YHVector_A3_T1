//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorHeader.h"

// Hassan
template<typename T>
YHVector<T>::YHVector() {

}

// Hassan
template<typename T>
YHVector<T>::YHVector(int n) {

    Capacity = n;
    Size = 0;

}

// Hassan
template<typename T>
YHVector<T>::YHVector(T *Array, int n) {

    Capacity = n;
    Size = n;
    Data = new T[n];

    for (int i = 0; i < n; i++) {
        Data[i] = Array[i];
    }

}

// Hassan
template<typename T>
YHVector<T>::YHVector(const YHVector<T> &other) {

}

// Hassan
template<typename T>
YHVector<T>::~YHVector() {

    if (Size != 0) {
        delete[] Data;
    }

    Capacity = 0;
    Size = 0;

}

// Hassan
template<typename T>
YHVector<T> &YHVector<T>::operator=(const YHVector<T> &other) {

}

// Hassan
template<typename T>
YHVector<T> &YHVector<T>::operator=(const YHVector<T> &&other) {

}

// Hassan
template<typename T>
T &YHVector<T>::operator[](int index) {

    return *(Data + index);

}

// Youssef
template<typename T>
int YHVector<T>::push_back(T item) {

}

// Youssef
template<typename T>
T YHVector<T>::pop_back() {

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter) {

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter1, iterator iter2) {

}

// Youssef
template<typename T>
void YHVector<T>::clear() {

    delete[] Data;
    Size = 0;

}

// Youssef
template<typename T>
void YHVector<T>::insert(iterator iter, T item) {

}

// Hassan
template<typename T>
T *YHVector<T>::begin() {

    Begin = Data;
    return Begin;

}

// Hassan
template<typename T>
YHVector<T>::iterator YHVector<T>::end() {

    End = Begin + Size - 1;
    return End;

}

// Hassan
template<typename T>
bool YHVector<T>::operator==(const YHVector<T> &other) {

}

// Hassan
template<typename T>
bool YHVector<T>::operator<(const YHVector<T> &other) {

}

// Youssef
template<typename T>
int YHVector<T>::size() {

    return Size;

}

// Youssef
template<typename T>
int YHVector<T>::capacity() {

    return Capacity;

}

// Youssef
template<typename T>
int YHVector<T>::resize() {

}

// Youssef
template<typename T>
bool YHVector<T>::empty() {

    return Size == 0;

}

// Youssef
template<typename T2>
ostream &operator<<(ostream &out, YHVector<T2> &yhVector) {


    for (auto i = yhVector.begin(); i <= yhVector.end(); ++i) {

        out << *i << endl;

    }

    return out;

}

void printDashes(){

    cout << string(20, '-') << endl;

}

// End of the file