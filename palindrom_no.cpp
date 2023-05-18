/*-------------------Palindrom no  if reverse of no n is same  ( n=5225  reverse operation res=5225)--------------*/
#include<iostream>
using namespace std;

/*-------------check no is palindrom or not return  ans thet store output of function no.----------------*/

int check(int n){
    int s;                  /*----- we also declare another var here -------*/
    int r;
    int ans = 0;
    while(s>0){
        r=s%10;
        ans=(ans*10)+r;
        s=s/10;
    }return ans;
}

/*------------------------- print function ----------------------*/
void print(int n,int ans){
    if (n==ans)
    {
        cout<<n<<" is Palindrom no.";
    }else{
        cout<<n<<" is Palindrom no.";
    }
    
}

/*-------------main() function--------------------*/
int main(){
    int n;
    cout<<"Enter no here = ";
    cin>>n;
    int res = check(n);
    print(n,res);
}