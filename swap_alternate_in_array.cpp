/*-----------------interchange element with next one---------------------*/
#include<iostream>
using namespace std;

/*---------------- Swap function ---------------*/

void swapAlternate(int arr[],int n){
    for(int i = 0;i <= n;i=i+2){
        if (i+1 < n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

/*------------------- print arry function -------------------*/

void printArry(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}

/*-----------main function---------------*/

int main(){
    int even[6]={3,6,8,9,6,5};
    int odd[7]={4,6,8,23,45,67,87};
    swapAlternate(even,6);
    printArry(even,6);
    cout<<endl;
    swapAlternate(odd,6);
    printArry(odd,6);
}