#include <bits/stdc++.h>
using namespace std;
const int N = 100001;
int tree[4 * N];
int arr[N];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }

    int mid = start + (end - start) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

void update(int node, int start, int end, int idx, int val)
{
    if (start == end)
    {
        arr[start] = val;
        tree[node] = val;
        return;
    }
    int mid = start + (end - start) / 2;
    if (idx <= mid)
    {
        update(2 * node, start, mid, idx, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, end, idx, val);
    }

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int start, int end, int l, int r)
{
    if (start > r || end < l)
        return 0;

    if (start >= l && end <= r)
    {
        return tree[node];
    }

    int mid = start + (end - start) / 2;
    int q1 = query(2 * node, start, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, end, l, r);
    return (q1 + q2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    build(1, 0, n - 1);
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 2)
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r) << "\n";
        }
        else if (type == 1)
        {
            int idx, val;
            cin >> idx >> val;
            update(1, 0, n - 1, idx, val);
        }
    }

    return 0;
}