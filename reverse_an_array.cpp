/*--------Reverse an array (use swaping btw first and end )--------------*/
#include<iostream>
using namespace std;

/*---------------------- reverse function ------------------*/
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }    
}

/*--------------print reverse  array function--------------------*/

void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*-------------main function ----------------------*/
int main(){
    int arr1[6]={3,6,8,0,4,3};
    int arr2[5]={'a','b','c','d','e'};   
    reverse(arr1,6);
    printarr(arr1,6);
    cout<<endl;

    /*----- if we want to reverse char type array then we must need to use char
    during calling or in fun definition--------*/
    reverse(arr2,5); /*---- we get numeric value bcz type casting effects here------*/
    printarr(arr2,5);
}