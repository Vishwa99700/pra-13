#include <iostream>
using namespace std;
int main ()
{
    cout<< "Enter the number of hours" <<endl;
    int h;
    cin>>h;
    cout<< "Enter the number of minitues" <<endl;
    int m;
    cin>>m;
    cout<< "Enter the number of seconds" <<endl;
    int s;
    cin>>s;
    int T;
    T=(h*3600) + (m*60) + s;
    cout<< "Total seconds = " <<T<<endl;
    return 0;
}





