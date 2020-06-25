#include<iostream>
#include<stack>
#include<string>

using namespace std;

void solve(string s){
    stack <char> st;
    stack <char> tmp;
    int n = s.length();
    int i = n-1;
    char dau;
    while(i>=0) {
        if(s[i] != '('){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            char k = st.top();
            while(k != ')'){
                tmp.push(k);
                st.pop();
                k = st.top();
            }
            if(st.top() == ')') st.pop();
            i--;
            if(s[i] == '-'){
                while(!tmp.empty()){
                    if(tmp.top() == '-') st.push('+');
                    else if(tmp.top() == '+') st.push('-');
                    else st.push(tmp.top());
                    tmp.pop();
                }
            }
            else{
                while(!tmp.empty()){
                    st.push(tmp.top());
                    tmp.pop();
                }
            }
            if(i>=0) st.push(s[i]);
        }
        i--;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        solve(s);
    }
}