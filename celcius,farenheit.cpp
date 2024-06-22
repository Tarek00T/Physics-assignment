#include<bits/stdc++.h>
using namespace std;
void farenheit()
{
    double celcius;
    cin >> celcius;
    double farenheit_temperature =9*celcius/5 +32 ;
    cout<<farenheit_temperature<<endl;
}
int main()
{
    int t=1;
    //cin >>t;
    while(t--)
    {
        farenheit();
    }
}

