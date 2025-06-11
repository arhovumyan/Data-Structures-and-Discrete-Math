//
// Created by Aro Hov on 5/14/25.
//

#include "IntArray.h"



void IntArray::expand() {
    capacity *= 2;

    int *newArr = new int[capacity];
    for (int i = 0; i < length; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}

void IntArray::insert(int index, int value) {
    arr[index] = value;
}

void IntArray::remove(int index) {
    arr[index] = 0;
}
