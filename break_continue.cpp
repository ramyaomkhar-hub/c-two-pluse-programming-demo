#include<iostream>
using namespace std;

int main(){
    for (int i=0; i < 4; i++)
    {
        /* code */
        cout<<i<<endl;
        if(i==2){
            break;
        }
        cout<<i<<endl;
    }

//  OUTPUT:
//  0
//  0
//  1
//  1
//  2
    for(int i = 0; i <40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}

// OUTPUT:
// 28
// 29
// 30
// 31
// 32
// 33
// 34
// 35
// 36
// 37
// 38
// 39
// 40

for (int i = 0; i < 40; i++)
{
    /* code */
    if(i==2){
        continue;
    }
    cout<<i<<endl;
}
 return 0;
}
// OUTPUT:
// 29
// 30
// 31
// 32
// 33
// 34
// 35
// 36
// 37
// 38
// 39
