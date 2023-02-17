#include<iostream>
using namespace std;



/*-----Factorial function call by nCr fun ------*/


int factorial(float n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;                /*------ logic for factorial ------*/
    }
    return fact;
    }


/*----F2 -------- find nCr-------*/

int nCr(float n, float r){
    int numer, deno ,res;               /*------calling of factorial function-----*/
    numer = factorial(n);
    deno = factorial(r) * factorial(n-r);

    res= numer/deno;

    return res;
}
    

int main(){

    int a;
    float b,c;
    cout<<"Enter n = ";
    cin>>b;
    cout<<"Enter r = ";
    cin>>c;

    int result = nCr(b,c);
    cout<<"Answer of nCr = "<<result;

return 0;

}

sanjeev
