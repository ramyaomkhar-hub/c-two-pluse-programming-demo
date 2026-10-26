// Union code of the c++ code

#include<iostream>
using namespace std;


union money
{

    /*data*/
           int rice ;  //4
           char favchar; //1
           float salary; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}


// OUTPUT:-

// 34
