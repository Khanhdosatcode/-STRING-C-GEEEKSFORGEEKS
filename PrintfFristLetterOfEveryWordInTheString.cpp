//Print first letter of every word in the string
//BasicAccuracy: 71.6%Submissions: 36963Points: 1
//Given a string S, the task is to create a string with the first letter of every word in the string.
// Example 1:
//Input: 
//S = "geeks for geeks"
//Output: gfg
//Example 2:
//Input: 
//S = "bad is good"
//Output: big
//Your Task:
//You don't need to read input or print anything. Your task is to complete the function firstAlphabet() which takes string S as input parameter and returns a string that contains the first letter of every word in S.
//Expected Time Complexity: O(|S|)
//Expected Auxiliary Space: O(|S|)
//Constraints:
//1 <= |S| <= 105
//S contains lower case English alphabets
//Words have a single space between them.
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void dev(string s,vector<string>&x) {
	    string s1="";
	    for(int i=0;i<s.size();i++) {
	           if(s[i]!=' ') s1+=s[i];
	           else {
	               x.push_back(s1);
	               s1="";
	           }
	    }
	    x.push_back(s1);
 	}
	string firstAlphabet(string s)
	{

    vector<string> x;
    dev(s,x);
    string a="";
    for(int i=0;i<x.size();i++) {
        a+=x[i][0];
    }
    return a;
}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 

/*C2
	string firstAlphabet(string s)
	{
// 	{
// 	    string s1="";
// 	    s1.push_back(S[0]);
// 	    for(int i=1;i<S.size();i++) {
// 	        if(S[i]==' '||S[i]=='\t'||S[i]=='\n')   s1+=S[i+1];
// 	    }
// 	    return s1;
// 	}
// } Driver Code Ends