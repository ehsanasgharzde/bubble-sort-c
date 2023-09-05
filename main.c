#include <stdio.h>


int main(void) {
    int array[] = {5, 2, 7, 4, 1, 6, 3, 0};
    int size = 8;
    int temp;

    for(int turn = 0; turn < size; turn++) {
        int counter = 0;
        for(int i = 0; i < (size - 1); i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                counter++;
            }
        }
        if (counter == 0) {
            break;
        }
    }

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}