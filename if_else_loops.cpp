#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    // ------ which no is greater-----
    int a, b;
    cout<<"Enter first no. = ";
    cin >> a;
    cout<<"Enter second no. =  ";
    cin >> b;
    if (a == b)
    {
        cout<<"You entered equal no. ";
    }
    else{
        if (a>b)
        {
            cout<<"First no is greater.";
        }else{
            cout<<"Second no is greater.";

        }

    }



        // -----Programm to show no is Negative , Poisitve or equal to zero -------

    int a;
    cout<< " Enter no = "; 
    cin>> a;
    if(a>0){
        cout<<" NO. is positive.";
    } else if (a==0)
    {
        cout<<"No. is Equal to Zero.";
    }else{
        cout<<"No is Negative";
    }


// ---------Practice question 1-------

    int a = 2;
    int b = a+1;
    if((a=3)==b){
        cout<< a;
    }else{
        cout<< a+1;
    }

     // output 4 if we increase or decrease value of a we get 4.


// ---------- Practice qusetion 2 ---------

char c;
cin>>c;
cout <<"Enter value here = "<<endl;
if (c>=48 && c<=57)
{
cout<<"Digit";                          /* ---Digit---- */
}else if (c>=97 && c<=122)
{
    cout<<"LowerCase";                   /* ---LowerCase---- */
}else if (c>=65 && c<=90)
{
    cout<<"UpperCase";                      /* ---UpperCase---- */
}else{
    cout<<"Another Symbol";
}



return 0;
getch();
}


