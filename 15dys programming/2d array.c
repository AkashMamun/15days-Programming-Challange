//2D Array intialization , Declaration and printing
/*
#include<stdio.h>
int main()
{
    int A[2][3]; //2 row 3 column
    //Now intialiation
    A[0][0]=10;
    A[0][1]=20;
    A[0][2]=30;

    A[1][0]=40;
    A[1][1]=50;
    A[1][2]=60;

    printf("1st row 1st column: %d\n",A[0][0]);
    printf("1st row 2nd column: %d\n",A[0][1]);
    printf("1st row 3rd column: %d\n",A[0][2]);

    printf("2nd row 1st column: %d\n",A[1][0]);
    printf("2nd row 2nd column: %d\n",A[1][1]);
    printf("2nd row 3rd column: %d\n",A[1][2]);
    return 0;
}
*/

// Directly Array intialization , Declaration and printing
/*
#include<stdio.h>
int main()
{
    char A[3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int r,c;
    for(r=0 ; r<3 ; r++){
        for(c=0 ; c<4 ; c++){
            printf("Number of Row and column is : %d\n",A[r][c]);
        }
    }
}
*/

//Getting input from user
/*
#include<stdio.h>
int main()
{
    int A[3][4];
    int i,j,r,c;

    //Scanning a matrix from user

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<4 ; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //Printing A matrix from user
    printf("A- ");
    for(r=0 ; r<3 ;r++){
        printf("\t");
        for(j=0 ; j<4 ; j++){
        printf("%d ",A[r][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//Gettting Two input for A an B matrix at a time
/*
#include<stdio.h>
int main()
{
    int A[3][4],B[3][4];
    int i,j,r,c;
    //Scaanning A matrix
    printf("Enter value for A Matrix: \n");
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<4 ; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printing of A matrix
    printf("A- ");
    for(r=0 ; r<3 ; r++){
        printf("\t");
        for(c=0 ; c<4 ; c++){
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }

    //Scanning for B Matrix

    printf("Enter a value for B matrix:\n");
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<4 ;j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }
    //printing for B Matrix
    printf("Enter a value for B Matrix: \n");
    printf("B- ");
    for(r=0 ; r<3 ; r++){
        printf("\t");
        for(c=0 ;c<4 ; c++){
            printf("%d ",B[r][c]);
        }
        printf("\n");

    }
}
*/
//Matrix Addition & Subtraction
/*
#include<stdio.h>
int main()
{
    int r,c,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];


    printf("Enter of Rows And columns : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //Scaanning A matrix
    printf("Enter value for A Matrix: \n");
    for(r=0 ; r<numberOfRows ; r++){
        for(c=0 ; c<numberOfCols ; c++){
            printf("A[%d][%d]=",r,c);
            scanf("%d",&A[r][c]);
        }
        printf("\n");
    }

    //Scanning for B Matrix

    printf("Enter a value for B matrix:\n");
    for(r=0 ; r<numberOfRows ; r++){
        for(c=0 ; c<numberOfCols ;c++){
            printf("B[%d][%d]= ",r,c);
            scanf("%d",&B[r][c]);
        }
        printf("\n");

    }
    //printing of A matrix
    printf("A- ");
    for(r=0 ; r<numberOfRows ; r++){
        printf("\t");
        for(c=0 ; c<numberOfCols ; c++){
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }


    //printing for B Matrix
    printf("\nB- ");
    for(r=0 ; r<numberOfRows; r++){
        printf("\t");
        for(c=0 ;c<numberOfCols ; c++){
            printf("%d ",B[r][c]);
        }
        printf("\n");

    }

    //Addition Matrix

    for(r=0 ; r<numberOfRows; r++){
        for(c=0 ;c<numberOfCols ; c++){
            C[r][c]= A[r][c]+B[r][c];
        }
    }
    //printing for B Matrix
    printf("\nA + B = ");
    for(r=0 ; r<numberOfRows; r++){
        printf("\n\t");
        for(c=0 ;c<numberOfCols ; c++){
            printf("%d ",C[r][c]);
        }
        printf("\n");

    }
}
*/

//Matrix Multiplication (part-1)

/*
#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter Row and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter Row and columns for secon matrix: ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2){
        printf("Error!!!! \nFirst matrix column and second matrix row is not equal\n");

        printf("Enter Row and columns for first matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("\nEnter Row and columns for second matrix: ");
        scanf("%d%d",&r2,&c2);
    }
    //Taking input for first matrix
    printf("\nEnter number for first matrix:\n");
    for(i=0 ; i<r1 ; i++){
        for(j=0; j<c1 ; j++){
        printf("first[%d][%d] = ",i,j);
        scanf("%d",&first[i][j]);
        }
    }

    //Taking input for second matrix
    printf("\nEnter number for second matrix:\n");
    for(i=0 ; i<r2 ; i++){
        for(j=0; j<c2 ; j++){
        printf("second[%d][%d] = ",i,j);
        scanf("%d",&second[i][j]);
        }
    }

    //Multipying Matrix A And B

    for(i=0 ; i<r1 ; i++){
        for(j=0 ; j<c2 ; j++){
            for(k=0 ; k<c1 ; k++){
                sum = sum + first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum =0;
        }
    }

    //Printing first matrix
    printf("\nHere First matrix\nA- ");
    for(i=0 ; i<r1 ; i++){
        printf("\t ");
        for(j=0; j<c1 ; j++){
        printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    //Printing second matrix
    printf("\nHere Second matrix\nB- ");
    for(i=0 ; i<r2 ; i++){
        printf("\t ");
        for(j=0; j<c2 ; j++){
        printf("%d ",second[i][j]);
        }
        printf("\n");

    }
        //Printing Result matrix
    printf("\nHere Result matrix\nB- ");
    for(i=0 ; i<r1 ; i++){
        printf("\t ");
        for(j=0; j<c2 ; j++){
        printf("%d ",result[i][j]);
        }
        printf("\n");

    }

}
*/
//Transpose matrix
/*
#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],i,j,row,col;
    printf("Enter Row and Columns number for a matrix: ");
    scanf("%d%d",&row,&col);

    //Getting the element for the matrix ;

    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //Transponse Matrix
    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++){
            transpose[j][i]=A[i][j];
        }

    }

    //printing the matrix
    printf("\nPrintng the matrix:\n");
    for(i=0 ; i<row ; i++){
            printf("\t ");
        for(j=0 ; j<col ; j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    //printing Transpose Matrix

    printf("Printing Transpose Matrix :\n");
    for(i=0 ; i<col ; i++){
            printf("\t ");
        for(j=0 ; j<row ; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

*/

//Sum of diagonal elements of a matrix
/*
#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;
    //Getting the element for the matrix ;
    printf("Enter the Element for the matrix :\n");
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    //printing Transpose Matrix

    printf("Printing This Matrix :\n");
    for(i=0 ; i<3 ; i++){
        printf("\t ");
        for(j=0 ; j<3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of Diagonal matrix
    printf("\nPrint Diagonal Matrix:-\n");
    for(i=0; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            if(i==j){
                printf("%d ",A[i][j]);
                sum = sum+A[i][j];

            }
        }

    }
    printf("Sum of Diagonal Matrix is : %d",sum);

}
*/


#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0;
    //Getting the element for the matrix ;
    printf("Enter the Element for the matrix :\n");
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    //printing A Matrix

    printf("Printing This Matrix :\n");
    for(i=0 ; i<3 ; i++){
        printf("\t ");
        for(j=0 ; j<3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //UpperSum CAnd LowerSum matrix
    printf("\nPrint Upper and Lower Diagonal Matrix:-\n");
    for(i=0; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            if(i<j){
                upperSum = upperSum + A[i][j];
            }
            if(i>j){
                lowerSum = lowerSum + A[i][j];
            }
        }

    }
    printf("\nSum of Upper Triangle Matrix is : %d\n",upperSum);
    printf("Sum of Lower Triangle Matrix is : %d\n",lowerSum);


}
