#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,c;

    cout <<"nilai sisi A : ";
    cin >> a;

    cout <<"nilai sisi B : ";
    cin >> b;

    cout <<"nilai sisi C : ";
    cin >> c;

    if(a==b && a==c)
    {
        cout<<"segitiga sama sisi"<<endl;
    }
    else if (a==b || a==c)
    {
        if(a!=b || a!=c)
        {
            cout<<"segitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"segitiga sembarang"<<endl;

    return 0;

}
















