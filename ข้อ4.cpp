#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int i=1,m=1;
    while(i<=n)
    {
        m*=i;
        i++;
    }
    cout << m;
    return 0;
}