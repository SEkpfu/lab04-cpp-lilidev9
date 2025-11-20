#include <iostream>
using namespace std;

void ticket( int x )
{
    int s1 = x/100000 + (x/10000)%10 + (x/1000)%10 ;
    if(s1 > 10)
        s1 = s1/10 + s1%10 ;

    int s2 = (x/100)%10 + (x/10)%10 + x%10 ;
    if(s2 > 10)
        s2 = s2/10 + s2%10 ;
    
    if( s1 == s2)
        cout << "Счастливый билет!" << endl;
    else
        cout << "Не счастливый билет(" << endl;
}

void ticket( int x, int y )
{
    int s1 = (y/100)%10 + (y/10)%10 + y%10 ;
    if(s1 > 10)
        s1 = s1/10 + s1%10 ;

    int s2 = (x/100)%10 + (x/10)%10 + x%10;
    if(s2 > 10)
        s2 = s2/10 + s2%10 ;

    if( s1 == s2)
        cout << "Счастливый билет!" << endl;
    else
        cout << "Не счастливый билет(" << endl;
}

void ticket( int a, int b, int c, int d, int e, int f)
{
    int s1 = a+b+c ;
    if(s1 > 10)
        s1 = s1/10 + s1%10 ;

    int s2 = d+e+f;
    if(s2 > 10)
        s2 = s2/10 + s2%10 ;

    if(s1 == s2)
        cout << "Счастливый билет!" << endl;
    else
        cout << "Несчастливый билет(" << endl;
}

int main()
{
    ticket(953125);
    ticket(123458);
    ticket(953,125);
    ticket(123,458);
    ticket(9,5,3,1,2,5);
    ticket(1,2,3,4,5,8);
    return 0;
}

