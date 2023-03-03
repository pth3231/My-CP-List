#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("../test.inp", "r", stdin);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int res[3] = {0, 0, 0};
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            int l = j + 1, r = n - 1;
            int result = 0;
            // Binary search
            /*
                - Nếu như tìm thấy tam giác vuông thì đánh dấu lại => số tg nhọn -> tg vuông -> tg tù
                - Nếu như không tìm thấy tam giác vuông thì chỉ có tg nhọn và tù
            */
            
        }

    return 0;
}