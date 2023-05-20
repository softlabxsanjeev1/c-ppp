#include<iostream>
using namespace std;


/*-------Funtion to print array elements take argument from another fun.-------*/


int printArray(int ary[],int size){

    cout<<"Printing an array ! "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<ary[i]<<" ";
    }
    cout<<endl<<endl<<endl;

}


/*--------this fun used to get elements of char type array ----------*/



char printArray2(char ary[],int size){

    cout<<"Printing an Char Type array ! "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<ary[i]<<" ";
    }
    cout<<endl<<endl;
}


/*--------   Main fun here we call printArray function   -----------*/



int main(){
    int size = 15;
    int fifteen[size]={1,3,5};
    printArray(fifteen,size);

    /*-------Initialization of character array-----------*/

char arr2[6]={'A','B','C','D'};
printArray2(arr2,6);
} 