#include<iostream>
using namespace std;
int main(){

    // what is a pointer?------> data type which holds the address of other datatype

    int a=3;
    int* b= &a;//&------->(Address of) operator
    cout<<" The address of a is"<<&a<<endl;
    cout<<" The address of a is"<<&b<<endl;
    // *------> (value at) Dereference operator

    cout<<" The address of b is"<<*b<<endl;
    

    return 0;

}



// OUTPUT:

//  The address of a is0x61ff0c
//  The address of a is0x61ff08
//  The address of b is3