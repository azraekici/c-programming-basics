#include <stdio.h>

int main() {
    float temp[5];
    float highest, lowest;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    highest = temp[0];
    lowest = temp[0];

    for(i = 1; i < 5; i++) {
        if(temp[i] > highest)
            highest = temp[i];
        if(temp[i] < lowest)
            lowest = temp[i];
    }

    printf("Highest: %.2f\n", highest);
    printf("Lowest: %.2f\n", lowest);

    return 0;
}
