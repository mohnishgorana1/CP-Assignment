#include<iostream>

using namespace std;
int main()
{   int n;
    cout<<"Enter a number to check for palindrome "<<endl;
    cin>>n;
    int rev=0,rem=0;
    int temp = n;
    if(n<0)
    {
        cout<<"Not Palindrome";
    }
    else
    {
        while(n>0)
        {   
            rem = n%10;
            rev = rev*10 + rem;
            n = n/10; 
        }
        if(temp == n)
        {
            cout<<"Palindrome";
        }
        else
        {
            cout<<"Not Palindrome";
        }
    }


}
