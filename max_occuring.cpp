#include<bits/stdc++.h>
using namespace std;
char getmostOccuringchar(string s)
{
    int arr[26]={0};
    
    // Create an Array of Counters
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        int number=0;
        //Lower Case
        if(ch >= 'a' && ch<='z')
            number = ch - 'a';
        //Upper Case
        else
            number = ch - 'A';

        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i=0;i<26;i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}
int main()
{
    string s;
    cin >> s;
    cout<<getmostOccuringchar(s)<<endl;
    return 0;
}