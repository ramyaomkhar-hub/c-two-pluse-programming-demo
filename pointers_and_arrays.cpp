// pointers and arrays in c++


#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

     cout<<"These are marks"<<endl;
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

    //   you can change the value of an array
      
      marks[2] = 455;
    //   loop

    for (int i=0; i<4; i++)
    {
        cout<<"The value of marks "<<i<< " is "<< marks[i]<<endl;

        // pointers and array

        int *p=marks;
        cout<<"The value of marks[0] is"<<*p;
        cout<<"The value of marks[0] is"<<*(p+1)<<endl;
        cout<<"The value of marks[0] is"<<*(p+2)<<endl;
        cout<<"The value of marks[0] is"<<*(p+3)<<endl;

        return 0;

    }
}


// OUTPUT:-

// These are math marks
// 2278
// 738
// 378
// 578
// These are marks
// 23
// 45
// 56
// 89
// The value of marks 0 is 23
// The value of marks[0] is23The value of marks[0] is45
// The value of marks[0] is455
// The value of marks[0] is89