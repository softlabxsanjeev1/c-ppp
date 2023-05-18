#include<iostream>
#include<math.h>
using namespace std;

int INT_MIN , INT_MAX;

/*------------ function to get maximum number ----------------*/

int getMax(int num[],int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
    if (num[i]>max)
    {
        max = num[i];
    }
    }   
    return max; 
}


/*------------ function to get minimum number ----------------*/


int getMin(int num[],int size){                          // Not working proper
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
    
    } 
    return min;
    
}


/*------------ main() function----------------*/

int main()
{
    int size; 
    cout<<"Enter size of array = ";                         /*-----declaration of array size-----*/
    cin>>size;
    cout<<"Enter elements ";
    int num[5];
    for (int i = 0; i < size; i++)                          
    {
        cin>>num[i];
    }
    
    cout<<"Maximum value in this array = "<<getMax(num,size)<<endl;
    cout<<"Minimum value in this array = "<<getMin(num,size)<<endl;

}








