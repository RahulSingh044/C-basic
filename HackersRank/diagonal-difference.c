int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sumPrimary = 0, sumSecondary = 0;
    for (int i = 0; i < arr_rows; i++) {
        sumPrimary += arr[i][i];
        sumSecondary += arr[i][arr_columns - 1 - i];
    }
    int difference = abs(sumPrimary - sumSecondary);
    return difference;
}
