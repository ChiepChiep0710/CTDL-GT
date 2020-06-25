#include <bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 
 int t; cin>>t;
 string s;
 cin.ignore();
 while(t--){
	 getline(cin,s);
	 stack<char> a;
	 for (int i=0;i<s.length();i++){
	 	if(s[i]!=' ') {
	 		a.push(s[i]);
		 }
		 if((s[i]==' ' || i==s.length()-1) && !a.empty()){
			while(!a.empty()){
				cout<<a.top();
				a.pop();
			}
			cout<<' ';
		 }
	 }
	 cout<<endl;
}
return 0;
}
/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int t;
    
    cin >> t;
    cin.ignore();
    while (t--)
    {
        bool ok=true,ok1=false;
        string s;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ' '){
                while (!st.empty() && ok1){
                    cout << st.top();
                    st.pop();
                }
                if (ok) {
                    cout << " ";
                    ok=false;
                }
            }
            else{
                st.push(s[i]);
                ok=true;
                ok1=true;
            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}*/