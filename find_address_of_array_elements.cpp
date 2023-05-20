//find address of gib=ven index no in an array
#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,5,6,7};
    cout<<"arr -> Return address = "<<arr<<endl;           //return starting address of an array
    cout<<"arr[0] -> Return element = "<<arr[0]<<endl;        //return element at given index no.
    cout<<"&arr[0] -> Return address = "<<&arr[0]<<endl;         //return address of 0th element
}