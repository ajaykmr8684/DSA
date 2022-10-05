/*Sum of first n numbers*/



#include <bits/stdc++.h>
using namespace std;

int recur(int n)
{
	if(n == 1)
	{
		return 1;
	}

	return n * recur(n-1);	

}

int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int n;
cin >> n;
int sum = 0;

int ans = recur(n);

cout << ans;

}