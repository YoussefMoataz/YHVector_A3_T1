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

}

// Hassan
template<typename T>
YHVector<T>::YHVector(T *, int n) {

}

// Hassan
template<typename T>
YHVector<T>::YHVector(const YHVector<T> &other) {

}

// Hassan
template<typename T>
YHVector<T>::~YHVector() {

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

}

// Youssef
template<typename T>
int YHVector<T>::capacity() {

}

// Youssef
template<typename T>
int YHVector<T>::resize() {

}

// Youssef
template<typename T>
bool YHVector<T>::empty() {

}

// Youssef
template<typename T>
ostream &operator<<(ostream &out, YHVector<T> yhVector) {

}

// End of the file