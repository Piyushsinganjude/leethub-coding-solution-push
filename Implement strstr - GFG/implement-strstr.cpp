//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     int lenS=s.length();
     int lenX=x.length();
     int flag;
     for(int i =0;i<lenS;i++)
     {
         if(s[i]== x[0]){
             flag=0;
             for(int j =0;j<lenX;j++){
                 if(s[i+j] != x[j]){
                     flag=1;
                     break;
                 }
             }
             if(flag == 0){
                 return i;
             }
         }
     }
     return -1;
}