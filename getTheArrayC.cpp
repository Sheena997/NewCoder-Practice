/*
?从A、B两个矩阵相乘得到C矩阵的过程
?*/
?#include <iostream>
#include <vector>

using namespace std;

void getTheArrayC(vector<vector<int>> A, vector<vector<int>> B, vector<vector<int>>& C, int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            for(int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}
int main()
{
?    int n = 0;
?    cin >> n;
    vector<vector<int>> A(n, vector<int>(n, 0));
    vector<vector<int>> B(n, vector<int>(n, 0));
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cin >> A[i][j];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cin >> B[i][j];
    }
    
    vector<vector<int>> C(n, vector<int>(n, 0));
    
    getTheArrayC(A, B, C, n);
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
