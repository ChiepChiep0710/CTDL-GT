#include <iostream> 
using namespace std;
int main(){
    int n,m=0,x;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++) {
            cin >> x;
            if (x) cout << j << " ";

        }
        cout << endl;
    }
    
}