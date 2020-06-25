#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

struct number
{
    int a;
    int b;
};

int a[100005],x,n;
bool cmp(int xx, int yy){
     if (abs(x-xx)<abs(x-yy)) return true;
     else return false;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> x;

        /*for(int i=0; i<n; i++){
            cin >> arr[i].a;
            arr[i].b = abs(arr[i].a - x);
        }
        sort(arr, arr+n,cmp); 
        for(int i=0; i<n; i++){
            cout << arr[i].a << " ";
        }*/
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n,cmp);
        for (int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}

/*using namespace std;
#include <bits/stdc++.h>

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        vector<pair<int,int>>vect;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            vect.push_back(make_pair(abs(x-k),i));
        }

        sort(vect.begin(),vect.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[vect[i].second]<<" ";
        }
        cout<<endl;
        cout <<n << k;
    }


    //code
    return 0;
}*/

