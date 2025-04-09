//One- dimentional  and multiple- dimentional
#include <stdio.h>
int main() {
    //3x3 matrix initialisation
    int matrix[3] [3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //Access 6 in the matrix
    printf("Element at [1][2]: %d\n",matrix[1][1]);
    //modify /insert 25 to replace 7, [2][0]
    
    return 0;
}