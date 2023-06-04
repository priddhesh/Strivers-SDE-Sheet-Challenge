#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
    vector<int> row, column;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row.push_back(i);
                column.push_back(j);
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        if (find(row.begin(), row.end(), i) != row.end())
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < matrix[0].size(); j++)
    {
        if (find(column.begin(), column.end(), j) != column.end())
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
}