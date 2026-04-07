#include <stdio.h>

void print_reverse(int *arr, int size){
    int *start = arr;
    arr = arr + size-1;
    while(start<arr){
        print(*arr+' ');
        arr--;
    }
    print(*arr);
}

int main(){
    int nums[] = {1,2,3,4,5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}   