#include<stdio.h>
int main(){
    int mtrx1[20][20],mtrx2[20][20],mulmtrx[40][40],n1,n2,i,j,k;
    printf("Enter matrix sizes:");
    scanf("%d%d",&n1,&n2);
    if(n1==n2){
        printf("Enter first matrix elements\n");
        for(i=0;i<n1;i++)
            for(j=0;j<n1;j++)
                scanf("%d",&mtrx1[i][j]);
        printf("Enter second matrix elements\n");
        for(i=0;i<n2;i++)
            for(j=0;j<n2;j++)
                scanf("%d",&mtrx2[i][j]);
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                mulmtrx[i][j]=0;
                for(k=0;k<n1;k++)
                    mulmtrx[i][j]=mulmtrx[i][j]+mtrx1[i][k]*mtrx2[k][j];
            }
        }
        printf("\nResult matrix is\n");
        for(i=0;i<n1;i++){
            for(j=0;j<n1;j++)
                printf("%d\t",mulmtrx[i][j]);
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication is not possible");
    return 0;
}
