//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorHeader.h"

// Hassan
template<typename T>
YHVector<T>::YHVector() {

    Data = new T[1];

}

// Hassan
template<typename T>
YHVector<T>::YHVector(int n) {

    Capacity = n;
    Size = 0;

    Data = new T[n];

    begin();
    end();

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

    begin();
    end();

}

// Hassan
template<typename T>
YHVector<T>::YHVector(const YHVector<T> &other) {

    Capacity = other.Capacity;
    Size = other.Size;
    Data = new T[Size];

    for (int i = 0; i < Size; i++) {
        Data[i] = other.Data[i];
    }

    begin();
    end();

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

    this->Capacity = other.cpacity;
    this->Size = other.Size;
    this->Data = new T[this->size];
    for (int i = 0; i < this->Size; i++) {
        this->Data[i] = other.Data[i];
    }

    begin();
    end();

}

// Hassan
template<typename T>
YHVector<T> &YHVector<T>::operator=(const YHVector<T> &&other) {

    this->Capacity = other.cpacity;
    this->Size = other.Size;
    this->Data = new T[this->size];
    for (int i = 0; i < this->Size; i++) {
        this->Data[i] = other.Data[i];
    }

    begin();
    end();

    other->Capacity = 0;
    other->Size = 0;
    delete[] other->Data;
    other->Begin = nullptr;
    other->End = nullptr;

}

// Hassan
template<typename T>
T &YHVector<T>::operator[](int index) {

    if (index < Size && index >= 0) {

        return *(Data + index);

    } else {

        throw out_of_range("Out of range !");

    }

}

// Youssef
template<typename T>
int YHVector<T>::push_back(T item) {

    resize();

    Data[Size] = item;

    Size++;

    return 1;

}

// Youssef
template<typename T>
T YHVector<T>::pop_back() {

    if (Size > 1) {

        T *temp = new T[Size - 1];

        for (int i = 0; i < Size - 1; ++i) {

            temp[i] = Data[i];

        }

        delete[] Data;

        Data = new T[Capacity];

        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        delete[] temp;

        Size--;

        return *(end() - 1);
    }

    T lastItem = Data[0];

    delete[] Data;

    Size = 0;

    return lastItem;

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter) {

    if (iter >= begin() && iter < end()) {

        int sz = Size;

        T *temp = new T[Size];

        int j = 0;

        for (int i = 0; i < Size; ++i) {

            if (&Data[i] == iter) {
                sz--;
                continue;
            } else {
                temp[j] = Data[i];
                j++;
            }

        }

        delete[] Data;

        Data = new T[Size - 1];
        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        Size = sz;

        delete[] temp;

    }

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter1, iterator iter2) {

    if (iter1 >= begin() && iter2 < end()) {

        int sz = Size;

        T *temp = new T[Size];

        int j = 0;

        for (int i = 0; i < Size; ++i) {

            if (&Data[i] >= iter1 && &Data[i] <= iter2) {
                sz--;
                continue;
            } else {
                temp[j] = Data[i];
                j++;
            }

        }

        delete[] Data;

        Data = new T[Size - 1];
        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        Size = sz;

        delete[] temp;

    }

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

    if (iter >= begin() && iter <= end()) {

        T *temp = new T[Size + 1];

        int i = 0;
        for (; i < Size; ++i) {

            if (&Data[i] == iter) {
                break;
            }

        }

        int counter = 0;
        while (counter < i) {

            temp[counter] = Data[counter];

            counter++;

        }

        counter = Size;

        while (counter > i) {

            temp[counter] = Data[counter - 1];

            counter--;

        }

        temp[i] = item;

        delete[] Data;

        Size++;

        if (Size >= Capacity) {

            Capacity *= 2;

        }

        Data = new T[Size];
        for (int k = 0; k < Size; ++k) {

            Data[k] = temp[k];

        }

        delete[] temp;
    }

}

// Hassan
template<typename T>
T *YHVector<T>::begin() {

    Begin = Data;
    return Begin;

}

// Hassan
template<typename T>
T *YHVector<T>::end() {

    End = Begin + Size;
    return End;

}

// Hassan
template<typename T>
bool YHVector<T>::operator==(const YHVector<T> &other) {
    if(this->Size==other.Size){
        if(this->Capacity==other.Capacity){
            for(int i=0;i<other.Size;i++){
                if(this->Data[i]!=other.Data[i]){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    return false;
}

// Hassan
template<typename T>
bool YHVector<T>::operator<(const YHVector<T> &other) {
    int SmallestSize;
    if(this->Size<1||other.Size<1){
        return false;
    }

    if(this->Size<other.Size){
        SmallestSize=this->Size;
    }
    else{SmallestSize=other.Size;}

    for(int i=0;i<SmallestSize;i++){
        if(this->Data[i]<other.Data[i]){
            return true;
        }
    }
    return false;
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

    if (Size >= Capacity) {

        Capacity *= 2;

        T *temp = new T[Size];

        for (int i = 0; i < Size; ++i) {

            temp[i] = Data[i];

        }

        delete[] Data;

        Data = new T[Capacity];

        for (int i = 0; i < Size; ++i) {

            Data[i] = temp[i];

        }

        delete[] temp;

        return 1;
    }

    return 0;

}

// Youssef
template<typename T>
bool YHVector<T>::empty() {

    return Size == 0;

}

// Youssef
template<typename T2>
ostream &operator<<(ostream &out, YHVector<T2> &yhVector) {

    if (yhVector.size() > 0) {

        for (auto i = yhVector.begin(); i < yhVector.end() - 1; ++i) {

            out << *i << ", ";

        }

        out << *(yhVector.end() - 1);

    }

    return out;

}

void printDashes() {

    cout << string(20, '-') << endl;

}

// End of the file