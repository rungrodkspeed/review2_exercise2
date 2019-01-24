#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cout << "Enter N:";
    cin >> N;
    cout << "Enter M:";
    cin >> M;
    int sum=0,i=N;
    while(i<=M){
        sum+=i;
        i++;
    }
    cout << sum;
    return 0;
}