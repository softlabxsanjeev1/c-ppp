/*-----------------------linear search----(search a given  key value in given array)------------------------*/

#include<iostream>
using namespace std;
/*------------------------------------Search function-----------------------------------------*/

int n,key,size,i,arr1;   bool found;        /*-------- declaration of global variable ---------------*/
    
bool searchkey(int arr1[],int size,int key){
    for (int i = 0; i < size; i++){
        if (arr1[i] == key){
            return 1;
        }
        }
        return 0;
}

/*-------------------------------print function -----------------------------------*/

void  print(int a){
    if(found){
        cout<<"Key is present ."<<endl;
    }else{
        cout<<"Key not found ."<<endl;
    }
}


/*----------------------------------main function ---------------------------------*/

int main(){
n=9;
key=16;
int arr1[n]={4,6,8,9,10,13,16,12,18};

found = searchkey(arr1,n,key);
print(found);

}



//Error--------------------