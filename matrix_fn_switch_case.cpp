#include <iostream>
using namespace std;

void display(int M[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

void addition(int M1[10][10], int M2[10][10], int rows, int cols)
{
    int result[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = M1[i][j] + M2[i][j];
        }
    }

    cout << "\nAddition:\n";
    display(result, rows, cols);
}

void subtraction(int M1[10][10], int M2[10][10], int rows, int cols)
{
    int result[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = M1[i][j] - M2[i][j];
        }
    }

    cout << "\nSubtraction:\n";
    display(result, rows, cols);
}

void multiplication(int M1[10][10], int M2[10][10],
                    int rows1, int cols1, int cols2)
{
    int result[10][10] = {0};

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    cout << "\nMultiplication:\n";
    display(result, rows1, cols2);
}

void transpose(int M[10][10], int rows, int cols)
{
    int result[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = M[i][j];
        }
    }

    cout << "\nTranspose:\n";
    display(result, cols, rows);
}

int main()
{
    int M1[10][10], M2[10][10];
    int rows1, cols1, rows2, cols2;
    int choice;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> rows1 >> cols1;

    cout << "Enter elements of Matrix 1:\n";

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> M1[i][j];
        }
    }

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> rows2 >> cols2;

    cout << "Enter elements of Matrix 2:\n";

    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> M2[i][j];
        }
    }

    cout << "\nMatrix 1:\n";
    display(M1, rows1, cols1);

    cout << "\nMatrix 2:\n";
    display(M2, rows2, cols2);

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Transpose";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (rows1 == rows2 && cols1 == cols2)
            {
                addition(M1, M2, rows1, cols1);
            }
            else
            {
                cout << "\nAddition is not possible.";
            }
            break;

        case 2:
            if (rows1 == rows2 && cols1 == cols2)
            {
                subtraction(M1, M2, rows1, cols1);
            }
            else
            {
                cout << "\nSubtraction is not possible.";
            }
            break;

        case 3:
            if (cols1 == rows2)
            {
                multiplication(M1, M2, rows1, cols1, cols2);
            }
            else
            {
                cout << "\nMultiplication is not possible.";
            }
            break;

        case 4:
            transpose(M1, rows1, cols1);
            break;

        default:
            cout << "\nInvalid choice!";
    }

    return 0;
}
