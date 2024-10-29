#include <iostream>
#include "class.h"

using namespace std;

int main(){
    cout<<"Enter size array 1 -> ";
    int size1;
    cin>>size1;
    array mem0{size1};
    cout<<"Arr 1 do zapoln:"<<endl;
    mem0.print();

    mem0.random();
    cout<<"Arr 1 posle randomnogo zapolnenia:"<<endl;
    mem0.print();

    cout<<"\nMax in arr 1: "<<mem0.max();

    cout<<"\nMin in arr 1: "<<mem0.min()<<endl;

    cout<<"Arr 1 posle sortirovki:"<<endl;
    mem0.sort();
    mem0.print();

    cout<<"Enter new arr size -> ";
    int newsize;
    cin>>newsize;
    array mem1{mem0}, mem2{newsize};
    mem2.newsize(mem1,mem2);
    mem1.~array();
    cout<<"arr s new size:"<<endl;
    mem2.sort();
    mem2.print();
    return 0;
}