
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool valid(int i, int j, int n, int m) {
        if(i >= 0 && j >= 0 && i < n && j < m)
            return true;
        return false;
    }
    
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        int sum = 0, il, jl, ir, jr;
        vector<int> result;
        for(int i = 0;i < q;i++) {
            sum = 0;
            il = queries[i][1] - queries[i][0];
            jl = queries[i][2] - queries[i][0];
            ir = queries[i][1] + queries[i][0];
            jr = queries[i][2] + queries[i][0];
            for(int i = il;i <= ir;i++){
                if(valid(i, jl, n, m)) 
                    sum += mat[i][jl];
                if(valid(i, jr, n, m))
                    sum += mat[i][jr];
            }
            for(int i = jl+1;i < jr;i++){
                if(valid(il, i, n, m))
                    sum += mat[il][i];
                if(valid(ir, i, n, m))
                    sum += mat[ir][i];
            }
            result.push_back(sum);
        }
        return result;
    }
};
