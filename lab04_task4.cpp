#include <iostream>
using namespace std;

void a()
{
    for(int i = 0; i < 4; i ++){
        for(int j = 0; j < 4; j++){
            cout << "*";
            if(j == 3){
                cout << endl;
            }
        }
    }
}

void b(int n)
{   for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cout << "*";
            if(j == (n-1)){
                cout << endl;
            }
        }
    }
}

void c(int n,int m)
{
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(j == 0){
                for(int k = 0; k <m ; k ++){
                    cout << " ";
                }
            }
            cout << "*";
            if(j == (n-1)){
                cout << endl;
            }
        }
    }
}

void d(int n,int m)
{
    for(int i = 0; i<n*m; i++){
        for(int j = 0; j<n*m; j++){
            int a = 0;
            if((i/m)%2==1)
                a = 1;
            if((j/m)%2==1)
                a = (a+1)%2 ;
            if(a==0)
                cout << "-";
            if(a==1)
                cout << "*";
            if(j == n*m-1)
                cout << endl;
                



           /* if(j%m==0)
                a = (a+1)%2 ;
            if(a==0)
                cout << "-";
            if(a==1)
                cout << "*";
            if(j == n*m-1)
                cout << endl; 
            
        }
        if((i+1)%m==0){
                a = (a+1)%2;
            }
                */
        }
    }
}


int main()
{
    cout << "a)\n";
    a();

    int n;
    cout << "\nb)\nВведите число n\n";
    cin >> n;
    b(n);

    int m;
    cout << "\nc)\nВведите число m\n";
    cin >> m;
    c(n,m);

    cout << "\nd)\n";

    d(n,m);

    return 0;
    
}