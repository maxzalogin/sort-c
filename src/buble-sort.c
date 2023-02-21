#include <stdio.h>
#include <stdlib.h>

int generate(int* array, int size);
void sort(int* array, int size);
void print(int* array, int size);

int main() {
    int err = 0, size = 0;

    if ((scanf("%d", &size) != 1) || size <= 0) {
        printf("n/a");
    } else {
        int array[size];
        err = generate(array, size);
        if (err == 1) {
            printf("n/a");
        } else {
            sort(array, size);
            print(array, size);
        }
    }
    return 0;
}

int generate(int* array, int size) {
    int values = 0;
    int flag = 0;
    for (int i = 0; i < size; i++) {
        if ((scanf("%d", &values) != 1)) {
            flag++;
            return flag;
        }
        array[i] = values;
    }
    return flag;
}

void sort(int* array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void print(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i != size - 1) printf(" ");
    }
}