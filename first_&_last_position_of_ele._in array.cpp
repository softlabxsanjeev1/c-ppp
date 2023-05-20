/*----Pair is used to store multiple values in a single variable---*/
#include<iostream>
using namespace std;

/*---------- this fun returns index no. of first occurence of of given element -----------*/

int firstOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1; 
    int mid=(end+start)/2; 
    int ans;               

    while(start<=end){
        if(arr[mid] == key){
        ans = mid;
            end=mid-1;
        }else if (key > arr[mid])
        {
            start=mid+1;           /*------- For right itrattion ------*/
        }else if (key<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;        
    } return ans;   
}

/*---------- this fun returns index no. of last occurence of of given element -----------*/

int lastOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1; 
    int mid=(end+start)/2; 
    int ans;               

    while(start<=end){
        if(arr[mid] == key){
        ans  = mid;
            start=mid+1;
        }else if (key > arr[mid])
        {
            start=mid+1;           /*------- For right itrattion ------*/
        }else if (key<arr[mid])
        {
            end=mid-1;            /*------- For left itrattion ------*/
        }
        mid=(start+end)/2;        
    } return ans;   
}


/*------------ print function ------------*/
void print(int firsto,int lasto,int key){
    cout<<"First position of "<<key<<" is  = "<<firsto<<endl;
    cout<<"last position of " <<key<<" is  = "<<lasto<<endl;

}
/*-------------------------------main() function -------------------------------*/

int main(){
    int size=12;
    int key = 3;
    int arr1[12]={1,2,2,2,3,3,3,3,3,7,9};

    int firstoccurenece=firstOccur(arr1,size,key);    
    int lastoccurenece=lastOccur(arr1,size,key);
    print(firstoccurenece,lastoccurenece,key);
}