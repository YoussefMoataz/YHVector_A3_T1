//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorHeader.h"

template<typename T>
YHVector<T>::YHVector() {

}

template<typename T>
YHVector<T>::YHVector(int n) {

}

template<typename T>
YHVector<T>::YHVector(T *, int n) {

}

template<typename T>
YHVector<T>::YHVector(const YHVector<T> &other) {

}

template<typename T>
YHVector<T>::~YHVector() {

}

template<typename T>
YHVector<T> &YHVector<T>::operator=(const YHVector<T> &other) {

}

template<typename T>
YHVector<T> &YHVector<T>::operator=(const YHVector<T> &&other) {

}

template<typename T>
T &YHVector<T>::operator[](int index) {

}

template<typename T>
int YHVector<T>::push_back(T item) {

}

template<typename T>
T YHVector<T>::pop_back() {

}

template<typename T>
void YHVector<T>::erase(T::iterator iter) {

}

template<typename T>
void YHVector<T>::erase(T::iterator iter1, T::iterator iter2) {

}

template<typename T>
void YHVector<T>::clear() {

}

template<typename T>
void YHVector<T>::insert(T::iterator iter, T item) {

}

template<typename T>
T::iterator YHVector<T>::begin() {

}

template<typename T>
T::iterator YHVector<T>::end() {

}

template<typename T>
bool YHVector<T>::operator==(const YHVector<T> &other) {

}

template<typename T>
bool YHVector<T>::operator<(const YHVector<T> &other) {

}

template<typename T>
int YHVector<T>::size() {

}

template<typename T>
int YHVector<T>::capacity() {

}

template<typename T>
int YHVector<T>::resize() {

}

template<typename T>
bool YHVector<T>::empty() {

}

template<typename T>
ostream &operator<<(ostream &out, YHVector<T> yhVector) {

}

// End of the file