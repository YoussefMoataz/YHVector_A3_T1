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

    // add the new item to the last position
    Data[Size] = item;

    // increment the size
    Size++;

    return 1;

}

// Youssef
template<typename T>
T YHVector<T>::pop_back() {

    // if there is more than one element
    if (Size > 1) {

        // create a temp array with the new size
        T *temp = new T[Size - 1];

        // move the data to temp, without the last item
        for (int i = 0; i < Size - 1; ++i) {

            temp[i] = Data[i];

        }

        // delete the dynamically allocated data
        delete[] Data;

        // create new data with the same capacity
        Data = new T[Capacity];

        // restore the data from temp
        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        // delete the dynamically allocated temp
        delete[] temp;

        // decrease the size by one
        Size--;

        // return the last element
        return *(end() - 1);
    } else {

        // get the only item
        T lastItem = Data[0];

        // delete the dynamically allocated data
        delete[] Data;

        // reset the size
        Size = 0;

        // return the last element
        return lastItem;
    }

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter) {

    // check if the iterator is in the array
    if (iter >= begin() && iter < end()) {

        int sz = Size;

        // create a temp array
        T *temp = new T[Size];

        // counter for the temp values
        int j = 0;

        for (int i = 0; i < Size; ++i) {

            // add every element to the temp but Not the required position (iterator)
            if (&Data[i] == iter) {
                // decrease the size by one
                sz--;
                continue;
            } else {
                // copy the data to temp
                temp[j] = Data[i];
                // increase the counter for temp index
                j++;
            }

        }

        // delete the dynamically allocated data
        delete[] Data;

        // create a data array with the new size
        Data = new T[Size - 1];
        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        // set the new size
        Size = sz;

        // delete the dynamically allocated temp
        delete[] temp;

    }

}

// Youssef
template<typename T>
void YHVector<T>::erase(iterator iter1, iterator iter2) {

    // check if the iterators are in the array
    if (iter1 >= begin() && iter2 < end()) {

        int sz = Size;

        // create a temp array
        T *temp = new T[Size];

        // counter for the temp values
        int j = 0;

        for (int i = 0; i < Size; ++i) {

            // add every element to the temp but Not the required range (iterators)
            if (&Data[i] >= iter1 && &Data[i] <= iter2) {
                // decrease the size by one
                sz--;
                continue;
            } else {
                // copy the data to temp
                temp[j] = Data[i];
                // increase the counter for temp index
                j++;
            }

        }

        // delete the dynamically allocated data
        delete[] Data;

        // create a data array with the new size
        Data = new T[Size - 1];
        for (int i = 0; i < Size - 1; ++i) {

            Data[i] = temp[i];

        }

        // set the new size
        Size = sz;

        // delete the dynamically allocated temp
        delete[] temp;

    }

}

// Youssef
template<typename T>
void YHVector<T>::clear() {

    // delete the dynamically allocated data
    delete[] Data;

    // reset the size
    Size = 0;

}

// Youssef
template<typename T>
void YHVector<T>::insert(iterator iter, T item) {

    // check if the iterator is in the array
    if (iter >= begin() && iter <= end()) {

        // create a temp array with the new size
        T *temp = new T[Size + 1];

        // get the index of the iterator from the array
        int i = 0;
        for (; i < Size; ++i) {

            if (&Data[i] == iter) {
                break;
            }

        }

        // copy the data from the beginning till the index of the iterator
        int counter = 0;
        while (counter < i) {

            temp[counter] = Data[counter];

            counter++;

        }

        // copy from the end till after the required index
        counter = Size;
        while (counter > i) {

            temp[counter] = Data[counter - 1];

            counter--;

        }

        // update the required index to be the new item
        temp[i] = item;

        // delete the dynamically allocated data
        delete[] Data;

        // increment the size by one
        Size++;

        // update the capacity if needed
        if (Size >= Capacity) {

            Capacity *= 2;

        }

        // create a data array
        Data = new T[Size];
        for (int k = 0; k < Size; ++k) {

            Data[k] = temp[k];

        }

        // delete the dynamically allocated temp
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
    if (this->Size == other.Size) {
        if (this->Capacity == other.Capacity) {
            for (int i = 0; i < other.Size; i++) {
                if (this->Data[i] != other.Data[i]) {
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
    if (this->Size < 1 || other.Size < 1) {
        return false;
    }

    if (this->Size < other.Size) {
        SmallestSize = this->Size;
    } else { SmallestSize = other.Size; }

    for (int i = 0; i < SmallestSize; i++) {
        if (this->Data[i] < other.Data[i]) {
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