//String with k distinct characters and no same 
//characters adjacent
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,k;
	cin >> n >> k;
	string s="";
	if(n>k) {
		int count=0;
		for(int i=0;i<n;i++) {
			s+=char('a'+count);
			count++;
			if(count==k) count=0;
		}
	}
	cout<< s;
	}