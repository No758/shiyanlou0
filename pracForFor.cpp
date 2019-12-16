#include<iostream>

using namespace std;

int main()
{
     int swap,lower,upper;
     int sum =0;
     
     cout<<"Enter two numbers"<<endl;

     cin>>lower>>upper;
     if(upper<lower){
          swap =upper;
          upper=lower;
          lower=swap;
     }
     
     for(int i=lower; i<=upper;++i)
         sum+=i;

     cout<<"The sum of "<<lower<<" to "<<upper
     <<" is " <<sum<<endl;
     
     return 0;
     

}
