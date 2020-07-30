#include <stdio.h>
#include <stdlib.h>
#include "matrix/matrix.h"


int main(int argc, char*argv[]) {
    int m = 0, n = 0;

    if (argc == 3) {
        m = atoi(argv[1]);
        n = atoi(argv[2]);

        int **matrix = create_matrix(m, n);

        print_matrix(matrix, m, n);

        destroy_matrix(matrix);
    } else {
        printf("ERROR in file %s, func %s: \n"
               "Incorrect cmd args! \n"
               "Please specify num of columns and num of rows "
               "\n", __FILE__, "main");
    }

    return 0;
}
