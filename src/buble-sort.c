#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int generate(int* array);
void sort(int* array);
void print(int* array);

int main() {
    int err = 0, size = 0, array[SIZE];
    err = generate(array);
    if (err == 1) {
        printf("n/a");
    } else {
        sort(array);
        print(array);
    }
    return 0;
}

int generate(int* array) {
    int values = 0;
    int flag = 0;
    for (int i = 0; i < SIZE; i++) {
        if ((scanf("%d", &values) != 1)) {
            flag++;
            return flag;
        }
        array[i] = values;
    }
    return flag;
}

// Buble sort O(n^2)

void sort(int* array) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i - 0; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void print(int* array) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d", array[i]);
        if (i != SIZE - 1) printf(" ");
    }
}