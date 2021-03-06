#include <iostream>
#include <string>
#define maxn 1000005
using namespace std;
int n,m;
int a[1001][1001],b[1001];

void reinit(){
    for (int i=0; i<=100; i++)
        for (int j=0; j<=100; j++) a[i][j]=0;
}

void sohoa(string s){
    int emp=0;
    for (int i=0; i<s.length(); i++) {
        emp=emp*10+int(s[i])-48;
    }
    m++;
    b[m]=emp;
}

void xuli(string s){
    string emp="";
    for (int i=0; i<s.length(); i++){
        if (s[i]==' ') {
            sohoa(emp);
            emp="";
        }
        else emp+=s[i];
    }
    if (emp.length()!=0) sohoa(emp);
}

int main(){
    reinit();
    string s;
    cin >> n;
    cin.ignore();
    for (int i=1; i<=n; i++){
        m=0;
        getline(cin,s);
        xuli(s);
        for (int j=1; j<=m; j++) 
        {
             a[i][b[j]]=1; a[b[j]][i]=1;
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    
}