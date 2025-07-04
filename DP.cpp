class Solution
{
public:
    // int solve(int i, int j, int m, int n) {
    //     if(i == m - 1 && j == n - 1) return 1;
    //     if(i >= m || j >= n) return 0;
    //     return solve(i + 1, j, m, n) + solve(i, j + 1, m, n);
    // }
    // int uniquePaths(int m, int n) {
    //     return solve(0, 0, m, n);
    int uniquePaths(int m, int n)
    {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;
        for (int i = 1; i <= r; i++)
        {
            res = res * (N - r + i) / i;
        }
        return (int)res;
    }
};