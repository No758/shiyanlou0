#include<iostream>

using namespace std;

int main()
{
    int v1=0,v2=0,i=1;
    cout<<"Enter two numbers : "<<endl;
    cin>>v1>>v2;

    while(v1<=v2)
    {
        cout<<v1++<<" ";
        if((i++)%10==0)
            cout<<endl;
    }

    cout<<endl;

    return 0;
}
