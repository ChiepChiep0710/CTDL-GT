#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

struct number
{
    int a;
    int b;
    int c;
};

bool cmp(number x, number y){
    if (x.b<y.b) return true;
    if (x.b>y.b) return false;
    if (x.c<y.c) return true;
    else return false; 	
}

number arr[100005];
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        
        for(int i=0; i<n; i++){
            cin >> arr[i].a;
            arr[i].b = abs(arr[i].a - x);
	    arr[i].c = i;
        }
        sort(arr, arr+n, cmp); 
        for(int i=0; i<n; i++){
            cout << arr[i].a << " ";
        }
        cout << endl;
    }
}