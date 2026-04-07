#include <stdio.h>

int main(){
    char* alphas[] = {"abc", "def", "hjk"};

    int size = sizeof(alphas) / sizeof(alphas[0]);

    for(int i=0; i<size; i++){
        printf("%s\n", alphas[i]);
    }

}