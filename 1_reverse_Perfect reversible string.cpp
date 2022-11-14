//Perfect reversible string
//Difficulty Level : Easy
//Last Updated : 05 Jul, 2022
//Read
//Discuss
//You are given a string ‘str’, the task is to check that reverses of all possible substrings of ‘str’ are present in ‘str’ or not. 
//Examples: 
//Input : str = "ab"
//Output: "NO"
//// all substrings are "a","b","ab" but reverse
//// of "ab" is not present in str
//Input : str = "aba"
//Output: "YES"
//Input : str = "abab"
//Output: "NO"
//// All substrings are "a", "b", "a", "b", "ab", 
//// "ba", "ab", "aba", "bab", "abab" but reverse of
//// "abab" is not present in str
//Một giải pháp đơn giản cho vấn đề này là tạo tất cả các chuỗi con có thể có của 'st' và kiểm tra xem ngược lại của 
//chúng có tồn tại một cách tuyến tính trong 'str' hay không.
//Một giải pháp hiệu quả cho vấn đề này dựa trên thực tế là đảo ngược của tất cả các chuỗi con của 'str' 
//sẽ tồn tại trong 'str' nếu và chỉ khi toàn bộ chuỗi 'str' là palindrome. Chúng ta có thể biện minh cho thực tế này
// bằng cách xem xét toàn bộ chuỗi, điều ngược lại của nó sẽ chỉ tồn tại nếu nó là palindrome.
// Và nếu một chuỗi là palindrome, thì tất cả đảo ngược của tất cả các chuỗi con đều tồn tại.
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    int isReversible(string s, int n) { 
         //complete the function here
        int l=0;
        int r=n-1;
        while(l<=r) {
            if(s[l]!=s[r]) return 0;
            l++;
            r--;
        }
        return 1;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}


// } Driver Code Ends