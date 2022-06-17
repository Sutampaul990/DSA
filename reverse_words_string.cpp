// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

string reverse_String(string str)
{
	// Reverse str using inbuilt function
	reverse(str.begin(), str.end());
	str.insert(str.end(),' ');

	int n = str.length();
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == ' '){
			reverse(str.begin()+j,str.begin()+i);
			j = i + 1;
		}
	}
	str.pop_back();

	
	return str;
}

// Driver code
int main()
{
	string str;
    cout<<"Enter a String : ";
    getline(cin,str);
	string rev = reverse_String(str);
	// Print the reversed string
	cout << rev;
	return 0;
}
