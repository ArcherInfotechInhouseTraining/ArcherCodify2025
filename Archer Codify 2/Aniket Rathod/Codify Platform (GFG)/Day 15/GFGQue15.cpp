//{ Driver Code Starts
#include<iostream>
#include<string>
using namespace std;

string conCat(string a , string b);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<conCat(a,b)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends


string conCat(string s1 , string s2)
{
    return s1+s2;
}