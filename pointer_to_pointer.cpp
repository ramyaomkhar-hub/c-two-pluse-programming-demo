// Pointers concept  

#include<iostream>
using namespace std;

int main(){
     
    int a =3;
    int*b;
    b=&a;
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;

    // *------->(value at) Dereference operator
    cout<<"The value at address b is"<<*b<<endl;

    // Pointer to pointer
    int**c=&b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;

    cout<<"The address of c is"<<*c<<endl;
      cout<<"The value at address value at(value-at C(C)) is"<<**c<<endl;

      return 0;
    

    }

//     OUTPUT:

// The address of a is0x61ff08
// The address of a is0x61ff08
// The value at address b is3
// The address of b is0x61ff04
// The address of b is0x61ff04
// The address of c is0x61ff08
// The value at address value at(value-at C(C)) is3