#include <iostream>
#include <algorithm>

using namespace std;

struct task
{
    int start;
    int finish;
};

bool cmp(task a, task b)
{
    if (a.finish < b.finish) return true;
    else return false;
}

int main()
{
    int t,n;
    cin >> t;
    task a[100005];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].start;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].finish;
        }
        sort(a, a + n, cmp);

        int dem = 1;
        int k = a[0].finish;
        for (int i = 1; i < n; i++)
        {
            if (k <= a[i].start){
                dem++;
                k=a[i].finish;
            }
        }
        cout << dem << endl;
    }
}