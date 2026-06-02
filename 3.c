#include <stdio.h>

int searchMatrix(int matrix[][4], int n, int key)
{
    int row = 0;
    int col = n - 1;

    while(row < n && col >= 0)
    {
        if(matrix[row][col] == key)
            return 1;

        else if(matrix[row][col] > key)
            col--;

        else
            row++;
    }

    return 0;
}

int main()
{
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 29;

    if(searchMatrix(matrix, 4, key))
        printf("Key Found\n");
    else
        printf("Key Not Found\n");

    return 0;
}