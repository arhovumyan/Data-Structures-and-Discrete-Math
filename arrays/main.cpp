#include <iostream>
#include <string>
#include <array>

const int ARRAY_SIZE = 3;
using namespace std;


void PrintArrayElements(int numbers[]);
void PrintArrayElements(array<int, ARRAY_SIZE> numbers) ;

int main() {
    int numbers[ARRAY_SIZE] = {1,2,3};
    array<int, ARRAY_SIZE> numbersStandard = {4,5,6};

    PrintArrayElements(numbers);
    PrintArrayElements(numbersStandard);

    return 0;
}

void PrintArrayElements(int numbers[]) {
    for (int i =0; i < ARRAY_SIZE; i++) {
        cout << numbers[i] << ", ";
    }
    cout << endl;

}
void PrintArrayElements(array<int, ARRAY_SIZE> numbers) {
    for (auto num : numbers) {
        cout << num << ", ";
    }
    cout << endl;
}