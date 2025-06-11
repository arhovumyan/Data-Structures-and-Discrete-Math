//
// Created by Aro Hov on 5/14/25.
//

#ifndef INTARRAY_H
#define INTARRAY_H



class IntArray {
public:
    IntArray();
    ~IntArray();

    int getIndex(int index);
    void setIndex(int index, int value);

    void sortFromIndex(int index);

    void insert(int index, int value);
    void remove(int index);

    void push_back(int value);
    void pop_back(int value);



private:
    void expand();


private:
    int *arr;
    int length; //number of elements
    int capacity; //maximum number of elements
};



#endif //INTARRAY_H
