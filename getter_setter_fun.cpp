#include<iostream>
using namespace std;

//GETTER  and SETTER  function

class getter_setter
{
private:
int roll_no;

public :
char name;

int set_roll(int n){                  /*---------set value in private var --------*/
        roll_no = n;
}

int  get_roll(){                      /*-------get value from private var--------*/
    return roll_no;
}
};


int main(){
        getter_setter gs;
        gs.set_roll(30); /*---- set value -------*/
        cout<<"Roll no of student is = "<<gs.get_roll();   /*------ get value -------*/
}
