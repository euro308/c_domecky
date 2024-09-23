#include <stdio.h>

void draw_roof(int width) {
    int mid = width % 2 == 0 ? width / 2 : (width - 1) / 2;
    for (int i = 0; i < width - 2; i++) {
        for (int j = 0; j < width; j++) {
            if (j == mid + i || j == mid - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        if (i != width - 2) {
            printf("\n");
        }
    }
}

void draw_fence(int fence_length) {
    for (int k = 0; k < fence_length; k++) {
        printf("-|");
    }
}

void draw_walls_and_fence(int height, int width, int fence_length) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1) {
                printf("*");
            } else {
                if (j == 0) {
                    printf("*");
                } else if (j == width - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        if (i != 0) {
            draw_fence(fence_length);
        }
        printf("\n");
    }
}

void draw_house(int width, int height, int fence_length) {
    draw_roof(width);
    draw_walls_and_fence(height, width, fence_length);
}


int main(void) {
    int width;
    int height;
    int fence_length;

    printf("%s\n", "Enter the width of the house:");
    scanf("%d", &width);
    printf("%s\n", "Enter the height of the house:");
    scanf("%d", &height);
    printf("%s\n", "Enter the fence length of the house:");
    scanf("%d", &fence_length);

    draw_house(width, height, fence_length);
    return 0;
}
