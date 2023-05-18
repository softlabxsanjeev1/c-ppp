#include<iostream>
using namespace std;

/*-------------Sum function-----------------*/

int arySum(int num[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + num[i];
    }
    return sum;    
}


/*---------function to get sum as an argument ---------------*/


int printSum(int n){
    cout<<"Sum of all elements of an array is = "<<n<<endl;
}


/*------------------------main() function ----------------------*/


int main(){
    int size; 
    cout<<"Enter size of an array = ";
    cin>>size;
    int num[100]={2,4,6,8,4,9,4};

    // /*----------taking elements-------------*/

    // for (int i = 0; i < size; i++)
    // {
    //     cin>>num[i];
    // }
    
    int res = arySum(num,size);
    printSum(res);

return 0;
}