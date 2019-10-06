#include <stdio.h>
#include <stdlib.h>

int main (int input_en, char** input){
    printf("input[1]: %s\n", input[1]);
    printf("input[1][0]: %d\n", input[1][0]);  
    double d = atof(input[2]);
    double e = atof(input [3]);

    if (input[1][0] == '+'){
        printf("d + e: %f\n", d + e);
    }

    else if (input[1][0] == '-'){
        printf("d - e: %f\n", d - e);
    }

    else if (input[1][0] == 'X'){
        printf("d * e: %f\n", d * e);
    }

    else if (input[1][0] == '/'){
        printf("d / e: %f\n", d / e);
    }
}
