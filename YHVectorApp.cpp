//
// Created by Youssef Moataz on 12/6/2022.
//

#include "YHVectorFunctions.cpp"

int main() {

    YHVector<string> vv(4);
    YHVector<string> vv2 = YHVector<string>();
    int a1[5]={1,2,3,4,5};
    YHVector<int> vv3(a1,5);
    cout<<vv3[0]<<endl;
    return 0;
}

// End of the file