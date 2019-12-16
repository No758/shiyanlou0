#include<iostream>

using namespace std;

int main()
{
    int sum=0;
    int value=0;
    while(cin>>value)
        sum+=value;

    cout<<"Sum of all numbers is "<<sum<<endl;
    return 0;

}
