#include <iostream>
#include <sstream>

using namespace std;

double GetMaXValue(const double[][3], int);
double GetSum(const double[][3], int);

int main() {

    const int ARRAY_SIZE = 3;
    double numbers[ARRAY_SIZE][ARRAY_SIZE] = {{12,4,7}, {63,87,8},{2,9,10}};
    int numRows = sizeof(numbers) / sizeof(numbers[0]);
    int numCols = sizeof(numbers) / sizeof(numbers[0][0]);

    cout << "The length of both the outer and inner arrays is: " << ARRAY_SIZE << endl;
    cout << "The max value is: " << GetMaXValue(numbers, ARRAY_SIZE) << endl;
    cout << "The sum is: " << GetSum(numbers, ARRAY_SIZE) << endl;

    return 0;
}

double GetMaXValue(const double numbers[][3], int length) {

    double maxValue = numbers[0][0];
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (numbers[i][j] > maxValue) {
                maxValue = numbers[i][j];
            }
        }
    }
    return maxValue;
}

double GetSum(const double numbers[][3], int length) {
    double sum = 0;
    for (int i =0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            sum += numbers[i][j];
        }
    }
    return sum;
}

