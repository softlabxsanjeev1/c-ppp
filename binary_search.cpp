/*--Complexity of searching is O(log N). We need less n/power(2,k) itration to search an element-----*/
#include<iostream>
using namespace std;

/*----Binary search function return index no if we use int in decleration ---------*/
int binary_Search(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;

    while( start<=end){                    /*----iteration work till end bzc may be key value present at last -------*/

    if (arr[mid] == key)
    {                                             /*------return key index no if found ---------*/
        return mid;
    }
    if (arr[mid]>key)
    {
        start = mid+1;                           /*--------move rigth side------------*/

    }else{
        end=mid-1;                               /*---------move left side-----------*/
    }

    mid=(start+end)/2;      /*-----update mid-------*/
    }
return -1;
}

/*----------print function------------*/

void print_Key(int index,int key){
    if(index == -1){
        cout<<"Key not found in array";
    }else{
        cout<<key<<" present at "<<index<<" of given array. ";
    }
}

int main(){
    int key = 8;
    int arr[7]={9,3,6,8,0,4,3};

    int search = binary_Search(arr,7,key);          /*------------------Function call------------------*/
    print_Key(search,key);

}