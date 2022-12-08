//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorFunctions.cpp"

int main() {

//    YHVector<string> vv(4);
//    YHVector<string> vv2 = YHVector<string>();

    int a1[5] = {123, 22, 35, 41, 5445};
    YHVector<int> vv3(a1, 5);
//    cout<<vv3[2]<<endl;

//    for (int i = 0; i < vv3.size(); ++i) {
//        cout<<vv3[i]<<endl;
//    }

    cout << *(vv3.begin())<< endl;
    cout << *(vv3.end())<< endl;
    cout << (vv3.begin())<< endl;
    cout << (vv3.end())<< endl;

    printDashes();

    cout << vv3;

    printDashes();

    // working with STL
    int a2[5] = {45, 22, 35, 9, 12};
    YHVector<int> v2(a2, 5);

    sort(v2.begin(), v2.end() + 1);

    cout << v2;

    printDashes();

    int a3[5] = {123, 22, 35, 41, 5445};
    YHVector<int> v3(a3, 5);

    cout << v3.size() << endl;
    cout << v3.capacity() << endl;
    cout << v3 << endl;

    v3.push_back(642);

    cout << v3.size() << endl;
    cout << v3.capacity() << endl;
    cout << v3 << endl;

    return 0;
}

// End of the file