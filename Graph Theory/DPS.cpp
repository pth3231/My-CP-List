#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
int n, m;
vector<int> a[1001];
//stack<int> st;
bool res = false;
void DFS(int u, int val)
{
    cout << u << " ";
    visited[u] = true;
    //if (u == val) return true;
    for (int v : a[u])
        if (!visited[v])
        {
            if (v == val) {
                res = true;
                return;
            }
            DFS(v, val);
        }
}

int main()
{
    freopen("../test.inp", "r", stdin);
    cin >> n >> m;
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);

    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (int item : a[i])
            cout << item << " ";
        cout << '\n';
    }

    DFS(1, 10);
    cout << "\n";
    if (res)
        cout << "Exist\n";
    else    
        cout << "Non-exist\n";
    return 0;
}