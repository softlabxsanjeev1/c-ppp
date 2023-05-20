#include<iostream>
using namespace std;
int main(){
    int arry[5];     /*----------initialization of array 1--------*/

    int arry2[5]={2,5,7,5,4};       /*----------initialization of array 2--------*/


    cout<<"Element at 2nd position : "<<arry[2]<<endl;     /*printing array element*/

    cout<<"Element of 4th position : "<<arry2[4];



    /*------Array programm 2--(Print an array)---------*/


int size = 15;
int arry1[size] = {1,3,5,7};           /*----int ary[10] = {0}---it initialize all ele. 0---*/
cout<<"Printing an Array ! "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arry1[i]<<" ";
}
cout<<endl;

    /*------Array programm (char array)-----------*/
int n = 5;
char carray[n]= {'a','b','c','d','e'};
cout<<"Character array !"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<carray[i]<<" ";
}



}





