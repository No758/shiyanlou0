#include <iostream>

using namespace std;

int main()
{
    int v1,v2;
    cout<<"Enter two numbers "<< endl;
    cin>>v1>>v2;

    int lower,upper;
    if(v1>v2)
    {
        upper=v1;
        lower=v2;
    }
    else
    {
        upper=v2;
        lower=v1;
    }
    
    int i=lower;
    int sum=0;
    while(i<=upper)
    {
        sum+=i;
        ++i;
    }

    cout<<"The sum of "<<lower<<" to "<<
    upper<<" is " <<sum<<endl;

    return 0;

}
