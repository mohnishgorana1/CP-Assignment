#include<iostream>

using namespace std;

int main()
{
    int n,rev=0,rem=0;
    cout<<"Enter a number to check for palindrome "<<endl;
    cin>>n;
    int temp=n;

    if(n<0)     n = -n;


    while(n>0)
    {   
        rem = n%10;
        rev = rev*10 + rem;
        n= n/10; 
    }

    if(temp == rev)
    {
        cout<<endl<<"Palindrome";
    }
    else
    {
        cout<<endl<<"Not palindrome";

    }

    return 0;

}