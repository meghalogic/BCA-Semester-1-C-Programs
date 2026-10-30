#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the number rows:");
    scanf("%d",&row);
    printf("Enter the number columns:");
    scanf("%d",&column);

    int matrix[row][column];
    int i,j;

    printf("Enter the elements of the matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter the elemnent [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return  0;
}




