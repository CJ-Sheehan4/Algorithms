#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> a);
void print(vector<int> a);

int main(void)
{
    srand(time(NULL));
    vector<int> myA = { 5, 2, 4, 6, 1, 3 };
    vector<int> myA1 = { rand() % 100, rand() % 100 , rand() % 100 , rand() % 100 , rand() % 100 };
    myA = insertionSort(myA);
    print(myA);
    cout << "myA1: ";
    print(myA1);
    myA1 = insertionSort(myA1);
    print(myA1);

    return 0;
}
/*
INSERTION - SORT(A)
1   for j = 2 to A.length
2       key = A[j]
3       // Insert A[j] into the sorted sequence A[1 . . j − 1].
4       i = j − 1
5       while i > 0 and A[i] > key
6           A[i + 1] = A[i]
7           i = i − 1
8       A[i + 1] = key
*/
vector<int> insertionSort(vector<int> a) {

    for (int j = 1; j < a.size(); j++) {
        int key = a[j];
        int i = j - 1;
        while (i > -1 && a[i] > key) {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
    return a;
}
void print(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}