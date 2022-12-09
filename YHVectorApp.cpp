//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorFunctions.cpp"

int main() {

    int a1[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v1(a1, 5);

    try {

        cout << v1[2] << endl; // 35
        cout << v1[5] << endl; // exception

    } catch (out_of_range &e) {

        cout << e.what() << endl;

    }

    cout << *(v1.begin()) << endl; // 123
    cout << *(v1.end() - 1) << endl; // 5445
    cout << (v1.begin()) << endl; // address
    cout << (v1.end() - 1) << endl; // address

    printDashes();

    cout << v1 << endl; // the vector

    printDashes();

    // working with STL
    int a2[5] = {45, 22, 35, 9, 12};
    YHVector<int> v2(a2, 5);

    sort(v2.begin(), v2.end());

    cout << v2 << endl; // the sorted vector

    printDashes();

    int a3[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v3(a3, 5);

    cout << v3.size() << endl; // 5
    cout << v3.capacity() << endl; // 5
    cout << v3 << endl; // the vector

    v3.push_back(642);

    cout << v3.size() << endl; // 6
    cout << v3.capacity() << endl; // 10
    cout << v3 << endl; // the vector

    cout << v3.empty() << endl; // 0

    v3.clear();

    cout << v3.empty() << endl; // 1

    printDashes();

    string a4[4] = {"first", "second", "third", "fourth"};
    YHVector<string> v4(a4, 4);

    cout << v4.size() << endl; // 4
    cout << v4.capacity() << endl; // 4
    cout << v4 << endl; // the vector

    v4.push_back("finall");

    cout << v4.size() << endl; // 5
    cout << v4.capacity() << endl; // 8
    cout << v4 << endl; // the vector

    v4.push_back("last one");
    v4.push_back("last two");

    cout << v4.size() << endl; // 7
    cout << v4.capacity() << endl; // 8
    cout << v4 << endl; // the vector

    v4.clear();

    cout << v4.size() << endl; // 0
    cout << v4.capacity() << endl; // 8
    cout << v4 << endl; // none

    printDashes();

    string a5[4] = {"first", "second", "third", "fourth"};
    YHVector<string> v5(a5, 4);

    cout << v5 << endl; // the vector
    cout << v5.size() << endl; // 4

    v5.pop_back();
    v5.pop_back();
    v5.pop_back();
    v5.pop_back();

    cout << v5 << endl; // none
    cout << v5.size() << endl; // 0

    printDashes();

    int a6[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v6(a6, 5);

    *v6.begin() = *(v6.begin() + 3);

    cout << *(v6.begin()) << endl; // 41
    cout << *(v6.end() - 1) << endl; // 5445
    cout << (v6.begin()) << endl; // address
    cout << (v6.end() - 1) << endl; // address

    printDashes();

    int a7[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v7(a7, 5);
    YHVector<int> v8(v7);

    cout << v8 << endl; // the vector
    cout << v8.size() << endl; // 5
    cout << v8.capacity() << endl; // 5

    printDashes();

    int a9[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v9(a9, 5);
    YHVector<int> v10 = v9;

    cout << v10 << endl; // the vector

    v10.pop_back();
    v10.pop_back();

    cout << v10 << endl; // the vector
    cout << v10.size() << endl; // 3
    cout << v10.capacity() << endl; // 5

    printDashes();

    int a11[5] = {265, 8202, 3545, 401, 545};
    YHVector<int> v11(a11, 5);
    YHVector<int> v12;

    for (auto i = v11.begin(); i < v11.end(); ++i) {

        v12.push_back(*i);

    }

    cout << v12 << endl; // the vector
    cout << v12.size() << endl; // 5

    printDashes();

    string a13[5] = {"first", "second", "third", "fourth", "fifth"};
    YHVector<string> v13(a13, 5);

    cout << v13.begin() << endl; // address
    cout << v13.end() << endl; // address

    cout << v13 << endl; // the vector

    v13.erase(v13.begin() + 3);

    cout << v13 << endl; // the vector

    printDashes();

    string a14[8] = {"zero", "first", "second", "third", "fourth", "fifth", "sixth", "seventh"};
    YHVector<string> v14(a14, 8);

    cout << v14.begin() << endl; // address
    cout << v14.end() << endl; // address

    cout << v14 << endl; // the vector

    v14.erase(v14.begin() + 2, v14.begin() + 5);

    cout << v14 << endl; // the vector

    printDashes();

    string a15[5] = {"first", "second", "third", "fourth", "fifth"};
    YHVector<string> v15(a15, 5);

    cout << v15.begin() << endl; // address
    cout << v15.end() << endl; // address

    cout << v15 << endl; // the vector
    cout << v15.size() << endl; // 5

    v15.insert(v15.begin() + 4, "The new item");

    cout << v15 << endl; // the vector
    cout << v15.size() << endl; // 6

    printDashes();

    // test for == operator and < operator
    int a16[5] = {1, 1, 3, 4, 5};
    YHVector<int> v16(a16, 5);
    int a17[5] = {1, 2, 3, 4, 5};
    YHVector<int> v17(a17, 5);

    if (v16 == v17) {
        cout << "v16=v17" << endl;
    } else {
        cout << "v16!=v17" << endl;
    }

    if (v16 < v17) {
        cout << "a16<17" << endl;
    } else {
        cout << "a16!<a17" << endl;
    }

    return 0;
}

// End of the file