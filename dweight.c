#include <stdio.h>

int main(void) {
    int length = 12;
    int width = 10;
    int height = 8;
    int volume = length * width * height;
    int weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height) ;
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}
