/* 1  ---------------Print Counting btw given Numbers -----------------*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n , m;
    cout<<" Enter starting number = ";
    cin>>n;
    cout<<" Enter last  number = ";
    cin>>m;
    int i = n;
    while (i<=m)
    {
    cout<<i<<endl;
    i++;
    }

/* 2  ------------------Sum of series----------------*/

int a;
cout<<"Enter Last Number = ";
cin>>a;
int i=1;
int sum = 0;
while (i<=a)
{
sum=sum+i;
    i++;
}
cout<<"Total of all No. is =  "<<sum<<endl;



/* 3 -----------Find sum of Even Numbers-------------*/


int n ;
cout<<"Enter Last No. = ";
cin>>n;
int i = 0;
int sum = 0;
while (i<=n)
{
if (i%2==0)
{
    sum=sum+i;
}
i++;
}
cout<<"Sum of Even no. = "<<sum;



/* 4  --------------Patterns---------------*/

int n ;
cout<<"Enter no here = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<" * ";
        j++;
    }    
    cout<<endl;
    i++;
}

// OUTPUT
*  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 



/* 5  ----------------pattern of numbers----------------*/

int n;
cout<<"Enter a number = ";
cin>>n;

{
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i<<"  ";
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
}

// OUTPUT      print (i)
1  1  1  1  1  
2  2  2  2  2  
3  3  3  3  3  
4  4  4  4  4  
5  5  5  5  5 

/* 6 --------------Pattern 2 ------------*/

int n;
cout<<"Enter a No. = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<j<<"  ";
        j++;
    }
    cout<<endl;
    i++;
    
}

// OUTPUT  print(j)
1  2  3  4  
1  2  3  4  
1  2  3  4  
1  2  3  4 


/* 7 --------------Pattern 3 print reverse no------------*/

int n;
cout<<"Enter a No. = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<n-j+1<<"  ";
        j++;
    }
    cout<<endl;
    i++;
    
}

// OUTPUT

Enter a No. = 6
6  5  4  3  2  1  
6  5  4  3  2  1  
6  5  4  3  2  1  
6  5  4  3  2  1  
6  5  4  3  2  1  
6  5  4  3  2  1 


/*8 --------- Print counting in form of matrix --------------*/

int n ;
cout<<"Enter no = ";
cin>>n;
int i=1;
int count=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<count<<" ";
        count=count+1;
        j++;
    }
    cout<<endl;
    i++;
}


// OUTPUT

Enter no = 4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 


/*9 ----------------------------Triangle pattern-------- -----------*/

int n;
cout<<"Enter no. = ";
cin>>n;
int i = 1;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i++;
    
}

// OUTPUT

Enter no. = 6
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 



// 10 ----------------- Traingle pattern of no. --------------------

int n;
cout<<"Enter no = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT

Enter no = 7
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
7 7 7 7 7 7 7


// 11---------------Print Counting in Triangle format-----------------
int n;
cout<<"Enter no = ";
cin>>n;

int i=1;
int count = 1;
while (i<=n)
{
    int j =1;
    while (j<=i)
    {
        cout<<count<<" ";
        count=count+1;
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT

Enter no = 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


// 12 ----------------------------print counting in triangle form ----------

int n;
cout<<"Enter a number = ";
cin>>n;
int i=1;
while (i<=n)
{
    int value = i;
    int j =1;
    while(j<=i)
    {
        cout<<value<<" ";              /* (i+j-1)  2nd way */
        value=value+1;
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT
Enter a number = 6
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
6 7 8 9 10 11


// 13------------print reverse no in triangle format ---------------------

    int n;
cout<<"Enter a number = ";
cin>>n;
int i=1;
while (i<=n)
{
    int value = i;
    int j =1;
    while(j<=i)
    {
        cout<<value<<" ";            /* (i-j+1)  2nd way */
        value=value-1;             /* decrease value to print reverse */
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT

Enter a number = 6
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1 


/*14 -----------------Print series of Alphabets  (Pattern-1)----------------*/

int n ;
cout<<"Enter no here = ";
cin>>n;
int i =1;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        char ch='A'+i-1;             /* -----Typecasting use here -----*/
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT
A A A A A A 
B B B B B B 
C C C C C C 
D D D D D D 
E E E E E E 
F F F F F F 



/* 15------- Print alphabets in square matrix form  (Pattern-2) ---------*/

int n;
cout<<"Enter no here = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        char ch ='A'+j-1;
        cout<<ch<<"  ";
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT
Enter no here = 4
A B C D 
A B C D 
A B C D 
A B C D 



/* 16------- Print alphabets in square matrix form  (Pattern-2) ---------*/

int n;
cout<<"Enter no here = ";
cin>>n;
int i=1;
char start = 'A';
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<start<<" ";
        start=start+1;
        j++;
    }
    cout<<endl;
    i++;
}

// OUTPUT
Enter no here = 3
A B C 
D E F 
G H I

/* 17------- Print alphabets in square matrix form  (Pattern-3) ---------*/


int n;
cout<<"Enter no here = ";
cin>>n;
int i=1;
while (i<=n)
{
    int j = n;
    while (j<=n)
    {
        char start='A'+i+j-2;
        cout<<start<<" ";
        j++;
    }
    cout<<endl;
    i++;
}










/* 18------- Print alphabets in square matrix form  (Pattern-2) ---------*/














/* 19------- Print alphabets in square matrix form  (Pattern-2) ---------*/










/* 20------- Print alphabets in square matrix form  (Pattern-2) ---------*/











/* 21------- Print alphabets in square matrix form  (Pattern-2) ---------*/












/* 22------- Print alphabets in square matrix form  (Pattern-2) ---------*/











/* 23------- Print alphabets in square matrix form  (Pattern-2) ---------*/



    return 0;
    getch();

}


