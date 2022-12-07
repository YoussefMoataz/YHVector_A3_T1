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
    Capacity=n;
    Size=0;
}

// Hassan
template<typename T>
YHVector<T>::YHVector(T* Array, int n) {
    Data = new T[n];
    for(int i=0;i<n;i++){
        Data[i]=Array[i];
    }
}

// Hassan
template<typename T>
YHVector<T>::YHVector(const YHVector<T> &other) {

}

// Hassan
template<typename T>
YHVector<T>::~YHVector() {
    delete Data;
    Capacity=0;
    Size=0;
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
        return*(Data+index);
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
void YHVector<T>::erase(T::iterator iter) {

}

// Youssef
template<typename T>
void YHVector<T>::erase(T::iterator iter1, T::iterator iter2) {

}

// Youssef
template<typename T>
void YHVector<T>::clear() {

}

// Youssef
template<typename T>
void YHVector<T>::insert(T::iterator iter, T item) {

}

// Hassan
template<typename T>
YHVector<T>::iterator YHVector<T>::begin() {

}

// Hassan
template<typename T>
YHVector<T>::iterator YHVector<T>::end() {

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
template<typename T>
ostream &operator<<(ostream &out, YHVector<T> yhVector) {

//    for (auto i = yhVector.begin(); i < yhVector.end(); ++i) {
//
//        out << *i;
//
//    }

    for (auto i = 0; i < yhVector.Size; ++i) {

        out << yhVector[i];

    }

}

// End of the file