/*------     Armstrong no. if 153 =  power(1,3)+power(1,3)+power(1,3)       ------*/
#include<iostream>
#include<math.h>
using namespace std;

/*---------- funtion to check Armstrong no;--- return sum---------------*/
int checkno(int n){
    int sum = 0;
    int r;
    while (n>0)
    {
        int c;
        r=n%10;                     /*--------get individual value from n and store in r. ---------*/
        c = pow(r,3);
        sum = sum+c;                
        n=n/10;                              /*---------- update n --------------*/
    }
    return sum;    
} 

/*---------------Print function --------------------*/

void print(int n,int sum){
    if (n == sum)
    {
        cout<<"Given no is an Armstrong  no. "<<endl;
    }else{
        cout<<"Given no is NOT an Armstrong  no."<<endl;
    }
    
}

/*---------main function--------------*/

int main(){
    int n;
    cout<<"Enter no here  =  "<<endl;
    cin>>n;
    int res=checkno(n);
    print(n,res);


}






