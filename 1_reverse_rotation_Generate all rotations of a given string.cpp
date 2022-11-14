//Generate all rotations of a given string
//Difficulty Level : Easy
//Last Updated : 11 Jul, 2022
//Read
//Discuss
//Given a string S. The task is to print all the possible rotated strings of the given string.
//Examples: 
//Input : S = "geeks"
//Output : geeks
//         eeksg
//         eksge
//         ksgee
//         sgeek
//
//Input : S = "abc" 
//Output : abc
//         bca
//         cab
//PP1:Ý tưởng chạy một vòng lặp từ 1 đến vị trí cuối cùng của chuỗi . Xet tung truong hop moi vi tri la 1 diem xoay
//Đối với mỗi điểm xoay , sao chép phần sau của điểm xoay vào chuỗi tạm thời .
//tiếp tục sao chép phần đầu tiên của chuỗi gốc đến chuỗi tạm thời.
#include<bits/stdc++.h>
using namespace std;
//void solve(string S) {
//	int index=0;
//	string s1="";
//	for(int i=0;i<S.size();i++) {
//		index=i;
//		s1+=S.substr(index,S.size());
//		s1+=S.substr(0,index);
//		cout<<s1<<" ";	
//		s1="";
//		}
//	
// }
// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 	string S;
// 	cin >> S;
//	solve(S);
//	cout<<endl;
// }
//}
//PP2:Chúng tôi nối S với chính nó, tức là, chúng tôi thực hiện S.S ở đâu. là toán tử nối. 
//Bây giờ chúng ta duyệt qua chuỗi được nối từ 0 đến n - 1 và in tất cả các chuỗi con có kích thước n.
//Dưới đây là việc thực hiện phương pháp trên:  
void solve(string S) {
	string s1=S+S;
	for(int i=0;i<S.size();i++) {
		for(int j=0;j<S.size();j++) {
			cout<<s1[i+j];
		}
		cout<<endl;
	}
}
int main () {
	int t;
	cin >> t;
	while(t--) {
		 string S;
		 cin >> S;
		 solve(S);
	}
}