#include<iostream>
using namespace std;

/*------function 1 logic to find prime no .-----------*/

bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            return 0;             /*--prime no--*/
        }

        return 1;            /*--- Not Prime---*/
        
    }
    
}


/*------Function take value frome prime fun and return string----------*/

    int print(int a){
        if (a == 0)
        {
            cout<<" is Prime number";
        }else{
            cout<<" not a prime no";
        }
        
        
    }

    int main(){
        int a;
        cout<<"Enter no here to check = ";
        cin>>a;
        int res = prime(a);

        print(res);
    
    }
