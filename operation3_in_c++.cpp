// This the operation of logical operation in c++
#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"operation in c++"<<endl;
    cout<< "Following are the logical operation is c++"<<endl;
    // Logical operation
    cout<<"The value of this logical and operator ((a==b)&&(a<b)):" <<((a<b)&&(a<b))<<endl;
    cout<<"The value of this logical operator((a==b)||(a<b)) is:"<<((a==b)||(a<b))<<endl;
    cout<<"The value of this logical not operator(!(a==b)is"<<(!(a==b))<<endl;
return 0;
}

// OUTPUT:
// operation in c++
// Following are the logical operation is c++
// The value of this logical and operator ((a==b)&&(a<b)):1
// The value of this logical operator((a==b)||(a<b)) is:1
// The value of this logical not operator(!(a==b)is1