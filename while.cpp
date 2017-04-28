#include <iostream>
#include <stdio.h>
using namespace std;

int x;

void try_again ()
{
    cout << "enter value = " << "\n" ;
    cin >> x ;
}

int main()
{

    cout << "enter value = " ;
    cin >> x ;

while ( x != 5)
{
    try_again() ;

}
cout << "value correct\n" ;



return 0;
}
