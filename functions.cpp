#include<iostream>
using namespace std;


/* ------------ function 1 print table ---------*/



/*function signatuer (what the function return)*/

int table(int a){

    cout<<"-----------Table--------- "<<endl<<endl; /* a is parameter of this function */

/*function body*/

    cout<<"Enter no here = ";
    cin>>a;                         /*this fun take input*/

    int ans = 1;
    for (int i = 1; i <= 10; i++)
    {
        ans = a*i;
        cout<<a<<"   X   "<<i<<"   =   "<<ans<<endl;
    }
    cout<<endl;
    return ans;    
}


/*-----------function 2 power---------------*/


int power(int a,int b){

    cout<<"---------Input for power function : ----------"<<endl<<endl;

    cout<<"Enter first no = ";
    cin>>a;
    cout<<"Enter second no = ";
    cin>>b;
    int ans = 1;
    for (int i = 1; i <=b; i++)
    {
        ans = ans*a;
    }

    return ans;          /*----this fun return value use by another function----*/
    
}

/*-------function 3 use retuen value of another function as an argument --------*/


int write(int c){
    
    cout<<"Answer of power function is = "<<c<<endl<<endl;
}



/*-------function 4 retuen 0(Odd) & 1(Even) --------*/

bool isEven(int a){
    cout<<"--------------Find out no is even or odd ? --------------"<<endl<<endl;
    cout<<"Enter no here = ";
    cin>>a;

    if(a&1){
        return 0;
    }else{
        return 1;
    }
}



/*-------function 5 print even or odd --------*/

int give(bool a){                         /*take input bool type*/
    if(a==1){
        cout<<"Even no.";
    }else{
        cout<<"Odd no.";
    }
}






/*---------- Main function call by OS (automatically) -----------------*/


int main()
{
    int a;
    int b;                       /*-------local decleration of varibales----*/
    
    table(a);                    /*-----F1-----Calling of table funtion----------*/

    int ans = power(a,b);        /*-------F2---Calling of power funtion----------*/

    write(ans);                  /*------F3----Calling of write funtion----------*/  

    int result=isEven(a);


    give(result);       /*----F4------take result as an argument----------*/

    return 0 ;
}