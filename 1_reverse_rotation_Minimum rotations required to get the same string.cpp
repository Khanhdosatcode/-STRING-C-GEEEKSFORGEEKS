//Minimum rotations required to get the same string
//Difficulty Level : Medium
//Last Updated : 25 Jul, 2022
//Read
//Discuss
//Given a string, we need to find the minimum number of rotations required to get the same string.
//Examples: 
//Input : s = "geeks"
//Output : 5
//Input : s = "aaaa"
//Output : 1
//PP1
//Một chương trình để kiểm tra xem các chuỗi có phải là luân phiên của nhau hay không
//Bước 1: Khởi tạo kết quả = 0 (Ở đây kết quả là số lần quay) 
//Bước 2: Lấy một chuỗi tạm thời bằng với chuỗi gốc được nối với chính nó. 
//Bước 3: Bây giờ lấy chuỗi con của chuỗi tạm thời có kích thước giống như chuỗi gốc bắt đầu từ ký tự thứ hai (hoặc chỉ số 1). 
//Bước 4: Tăng số lượng. 
//Bước 5: Kiểm tra xem chuỗi con có bằng với chuỗi gốc hay không. Nếu có, sau đó phá vỡ vòng lặp. Hãy chuyển sang bước 2 và lặp lại nó từ chỉ mục tiếp theo. 
#include<bits/stdc++.h>
using namespace std;
int check(string s) {
	int n=s.size();
	string s1=s+s;
	for(int i=1;i<=n;i++) {
		if(s1.substr(i,n)==s) return i;
	}
	return n;
}
int main () {
	int t;
	cin >> t;
	 while(t--) {
	 	string s;
	 	cin >> s;
	 	cout<<check(s)<<endl;
	 }
}
//Độ phức tạp về thời gian: O (n 2 )
//Không gian phụ trợ: O (n)
//PP2
//Chúng ta có thể giải quyết vấn đề này mà không cần sử dụng bất kỳ biến tạm thời nào làm dung lượng bổ sung.
// Chúng tôi sẽ duyệt qua chuỗi gốc và tại mỗi vị trí, chúng tôi phân vùng nó và nối chuỗi con bên phải và 
// chuỗi con bên trái và kiểm tra xem nó có bằng với chuỗi gốc không
int check(string S) {
	int index=0;
	string s1="";
	int n=S.size();
	for(int i=1;i<n;i++) {
		s1="";
		s1+=(S.substr(i,n-i)+S.substr(0,i));
		if(s1==S) {
			index=i;
			s1="";
		return index;
	}
	
	}
	if(index==0) return n;
}
int main () {
	int t;
	cin >> t;
	 while(t--) {
	 	string S;
	 	cin >> S;
	 	cout<<check(S)<<endl;
	 	
	 }
}