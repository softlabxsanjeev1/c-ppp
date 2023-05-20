#include<iostream>
#include"hero_class.cpp"        /*------way to include class of anoter file --------*/
using namespace std;

/*------creating class----------*/

class hero{
    /*Properties or data members*/
    int a;              
    char b;                           /*-variable size depends on compiler base--*/
    char d;                           /*-- Empty obj take 1 byte space in memory--*/
    float n;            
    bool h;             
};


int main()
{
    car c1;
    hero h1;              /*--------------- creation of Object --------------*/
    cout<<"Size of hero class = "<<sizeof(h1)<<endl;
    cout<<"Size of hero class = "<<sizeof(c1)<<endl;

    /*h1 obj take 13 byte space in memory when we call it and it stores garbage value bcz we donot gave any value to its var.*/
}



/*------creating empty class class----------*/
class hero{

//Empty class bcz this classs have no property.
//But in empty case iByte memory allocate to an object for its identification.

};
