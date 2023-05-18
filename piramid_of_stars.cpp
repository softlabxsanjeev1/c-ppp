/*-------------print pyramid of array-----------------*/
#include<iostream>
using namespace std;
void pyramid(int n){
    int row = n;
    for (int  i = 1; i <=row; i++)
    {   
    for (int space = 1; space <= row-i; space++)
        {                                              /*-------loop for space-----------*/
            cout<<" ";       
        }  
    for (int j=1; j <=2*i-1; j++)
            {                                          /*-------- loop for stars---------*/
                cout<<"*";                
            }
    cout<<endl;        
    }
}

/*-------------right direction piramid ----------------*/

void right_piramid(int n)
{
    int a = n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = a; i >= 1; i--)                                 /*----------  mirror image  ------------*/
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no here = ";
    cin>>n;
    pyramid(n);
    cout<<endl<<endl;
    right_piramid(n);
}