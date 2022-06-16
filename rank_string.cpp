//while characters are non repeating
#include <bits/stdc++.h>
#include <string.h>

using namespace std;
int fact(int n)
{
	if(n==0||n==1)
    return n;
    return n*fact(n-1);
}


int findnumber(char* str, int low, int high)
{
	int countRight=0,i;

	for(i=low+1;i<high;i++)
		if(str[i] < str[low])
		    countRight++;
	return countRight;
}


int findRank(char* str)
{
	int len = strlen(str);
	int rank = 1,temp;
	int number;

	int i;
	for (i = 0; i < len; ++i) {
		temp=fact(len-i-1);
		number = findnumber(str, i, len);
		rank +=number*temp;
	}

	return rank;
}


int main()
{
	char str[100];
    cout<<"Enter ant String : ";
    cin>>str;
	cout << findRank(str);
	return 0;
}


