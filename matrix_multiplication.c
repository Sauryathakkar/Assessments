// Assessment: Program which takes 2 matrix as input and give their matrix multiplication as output 
#include <stdio.h>


main(){
    int arr_1[2][2], arr_2[2][2];
    int ele;
    printf("\n--------------- Matrix 1 ---------------\n\n");
    // Taking input and storing the first matrix
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        printf("Enter element : ");
        scanf("%d", &ele);
        arr_1[i][j] = ele;
        }
    }
    printf("\n%d\t%d\n%d\t%d", arr_1[0][0], arr_1[0][1], arr_1[1][0], arr_1[1][1]);
    // Taking input and storing the second matrix
    printf("\n--------------- Matrix 2 ---------------\n\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        printf("Enter element : ");
        scanf("%d", &ele);
        arr_2[j][i] = ele;
        }
    }
    printf("\n%d\t%d\n%d\t%d", arr_2[0][0], arr_2[1][0], arr_2[0][1], arr_2[1][1]);
    // Multiplying both matrix and storing the result
    int arr_ans[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            arr_ans[i][j] = (arr_1[i][0]*arr_2[j][0]) + (arr_1[i][1]*arr_2[j][1]);
        }
    }
    printf("\n--------------- Result: Matrix ---------------\n");
    printf("\n%d\t%d\n%d\t%d", arr_ans[0][0], arr_ans[0][1], arr_ans[1][0], arr_ans[1][1]);
}