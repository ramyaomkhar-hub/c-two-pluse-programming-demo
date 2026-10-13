// This is a if else control structure in c++

#include<iostream>
using namespace std;

int main(){
    // cout<<"This is if-else control structure";

    int age;
    cout<<"Tell me your age" << endl ;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You can not come to my party" << endl;
  }
else if(age==18){
    cout<<"You are a kid and you will get a kid pass to the party " << endl;
  }
else if (age<1){
    cout<<"You are not yet born"<< endl;
 }
else{
    cout<<"You can come to the party"<<endl;
    return 0;
  }
}


// OUTPUT:

// EXPECTED output
// case 1:Tell me your age 
//     18
//     you are a kid ans you will get a kid pass to the party 

// case 2:Tell me your age 
//      <1
//      you are not yet born 
     
// case 3:Tell me your age 
//       >0
//       you are not yet born     