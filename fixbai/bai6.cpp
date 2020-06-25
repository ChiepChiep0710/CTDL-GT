/*#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack <char> a;
        bool check = false;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                a.push(s[i]);
            }
            else if(!a.empty()){ 
                if(s[i] == ')'){
                    if(a.top() == '+' || a.top() == '-' || a.top() == '*' || a.top() == '/'){
                        while(!a.empty() && a.top() != '('){
                            // cout << a.top() << " ";
                            a.pop();
                        }
                        if(!a.empty() && a.top() == '(') a.pop();
                    }
                    else {
                        check = true;
                        break;
                    }
                }
            }
        
        }
        if(check) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
  int t;
 cin>>t;
 cin.ignore();
 while(t--){
 	string s;
 	getline(cin,s);
 	int n=s.length();
 	bool ok;
 	stack<char> a;
 	for (int i=0;i<n;i++){
 		if(s[i]==')'){
 			ok=true;
 			char top = a.top(); a.pop();
 			while(top!='('){
 				if(top=='+'||top=='-'||top=='/'||top=='*')
 					ok=false;
 				top=a.top(); a.pop();
			 }
			 if(ok) break;
		 }
		 else a.push(s[i]);
	 }
	 if(ok) cout<<"Yes"<<endl;
	 else cout<<"No"<<endl;
 
 }
return 0;
}