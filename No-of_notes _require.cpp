/*------------Program to find no of notes-----------*/

#include <iostream>
using namespace std;
int main()
{
    int amount, notes, choice;
    cout << "Enter amount here = ";
    cin >> amount;
    cout << "Enter choice here = ";
    cin >> choice;
    switch (choice)
    {
    case 2000:
    { /*----case for 2000 rs.note-----*/
        if (amount < 2000)
        {
            cout << "You entered less than 2000" << endl;
            cout << "Please select another choice";
            break;
        }
        notes = amount / 2000;
        cout << "No. of 2000 rupees notes are = "<<notes<<endl;
        amount = amount % 2000;
    }

    case 500:
    { /*----case for 500 rs.note-----*/
        if (amount < 500)
        {
            cout << "You entered less than 500" << endl;
            cout << "Please select another choice";

            break;
        }
        notes = amount / 500;
        cout << "No. of 500 rupees notes are = "<<notes<<endl;
        amount = amount % 500;
    }

    case 200:
    { /*----case for 200 rs.note-----*/
        if (amount < 200)
        {
            cout << "You entered less than 200" << endl;
            cout << "Please select another choice";

            break;
        }
        
        notes = amount / 200;
        cout << "No. of 200 rupees notes are = "<<notes<<endl;
        amount = amount % 200;
    }

    case 100:
    { /*----case for 100 rs.note-----*/
        if (amount < 100)
        {
            cout << "You entered less than 100" << endl;
            cout << "Please select another choice";

            break;
        }
        
        notes = amount / 100;
        cout << "No. of 100 rupees notes are = "<<notes<<endl;
        amount = amount % 100;
    }

    case 50:
    { /*----case for 50 rs.note-----*/
        if (amount < 50)
        {
            cout << "You entered less than 50" << endl;
            cout << "Please select another choice";

            break;
        }
        
        notes = amount / 50;
        cout << "No. of 50 rupees notes are = "<<notes<<endl;
        amount = amount % 50;
    }

    case 20:
    { /*----case for 20 rs.note-----*/
        if (amount < 20)
        {
            cout << "You entered less than 20" << endl;
            cout << "Please select another choice";

            break;
        }
        
        notes = amount / 20;
        cout << "No. of 20 rupees notes are = "<<notes<<endl;
        amount = amount % 20;
    }

    case 10:
    { /*----case for 10 rs.note-----*/
        if (amount < 10)
        {
            cout << "You entered less than 10" << endl;
            cout << "Please select another choice";

            break;
        }
        notes = amount / 10;
        cout << "No. of 10 rupees notes are = "<<notes<<endl;
        amount = amount % 10;
    }
    case 5:
    { /*----case for 5 rs.note-----*/
        if (amount < 5)
        {
            cout << "You entered less than 5" << endl;
            cout << "Please select another choice";

            break;
        }
        notes = amount / 5;
        cout << "No. of 5 rupees notes are = "<<notes<<endl;
        amount = amount % 5;
    }

    case 2:
    { /*----case for 2 rs.note-----*/
        if (amount < 2)
        {
            cout << "You entered less than 2" << endl;
            cout << "Please select another choice";

            break;
        }
        notes = amount / 2;
        cout << "No. of 2 rupees coins are = "<<notes<<endl;
        amount = amount % 2;
    }

    case 1:
    { /*----case for 1 rs.note-----*/
        if (amount < 1)
        {
            cout << "You entered less than 1" << endl;
            cout << "Please select another choice"<<endl;

            break;
        }
        notes=amount;
        cout << "No. of 1 rupees coins are = "<<notes<<endl;

    
    }
    default:
        cout << "Please anter valid values ! ";
    }

}
