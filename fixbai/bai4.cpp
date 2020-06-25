/*#include <bits/stdc++.h>
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
 		if(s[i]=='[' || s[i]=='{' || s[i]=='('){
 			a.push(s[i]);
		 }
		 else if(!a.empty()){
			if(s[i]==']' && a.top()=='[' )
			 	a.pop();
			else if(s[i]=='}' && a.top()=='{' ){
			 	a.pop();
			 }
			else if(s[i]==')' && a.top()=='(' ){
				a.pop();
			}
		}
	 }

	 if(a.empty()) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
 }
return 0;
}*/

#include<iostream>
#include<stack>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        stack <char> st;
        bool check = true;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else if (!st.empty())
            {
                if(s[i] == ')'){
                    if(st.top() != '('){
                    check = false;
                    break;
                    }
                    else{
                    st.pop();
                    }
                }
                else if(s[i] == ']'){
                    if(st.top() != '['){
                    check = false;
                    break;
                    }
                    else{
                    st.pop();
                    }
                }
                else if(s[i] == '}'){
                    if(st.top() != '{'){
                    check = false;
                    break;
                    }
                    else{
                    st.pop();
                    }
                }
            }
        }
        if(!st.empty()) check = false;
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}