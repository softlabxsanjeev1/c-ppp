#include<iostream>
using namespace std;

//access modifiers 
//private = access only inside class.  (by default private access modifier is used we donot access value outside)
//public = member functions access outside class or inside also.
//protected

class car{
    private:

    int value;
    int cost;

    public:

    char name;

};

int main()
{     
    // 3 objects of car.
    car car1;
    car car2;
    car car3;
    car1.value ;                 /*not accessed bcz this property data is private data of class.*/
    car1.name = 'S';             /*------ access out side the class bcz it is public ------*/
    cout<<"name of car is = "<<car1.name<<endl;

}
