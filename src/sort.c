void buble(int* array, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void quick(int* array, int first, int last) {
    if (first < last) {
        int left = first;
        int right = last;
        int center = array[(first + last) / 2];
        do {
            while (array[left] < center) left++;
            while (array[right] > center) right--;

            if (left <= right) {
                int tmp = array[left];
                array[left] = array[right];
                array[right] = tmp;
                left++;
                right--;
            }
        } while (left < right);
        quick(array, first, right);
        quick(array, left, last);
    }
}
