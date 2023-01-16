#include<bits/stdc++.h>
using namespace std;

int** createArray(int numRows, int numCols)
{
    int** arr = new int*[numRows];
    for(int i=0;i<numRows;i++){
        arr[i]= new int[numCols];
    }
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){
            arr[i][j]= rand() %100+1;
        }
    }
    return arr;
}

void sortArray(int** list, int row, int col, int sortCol) {
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < row; j++) {
            if (list[i][sortCol] > list[j][sortCol]) {
                for (int k = 0; k < col; k++) {
                    swap(list[i][k], list[j][k]);
                }
            }
        }
    }
}
int main()
{
 int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of cols: ";
    cin >> cols;
    int** arr = createArray(rows, cols);

    cout << "The 2D array contains: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 cout << "The Sorted array are: " << endl;
     int sortCol = 0;
    sortArray(arr, rows, cols, sortCol);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}