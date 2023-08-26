#include<stdio.h>
#include<stdlib.h>

void upp(int r,int **a)
{
    int i,j,s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i>j)
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        puts("");
    }
}

void low(int r,int **a)
{
    int i,j,s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i<j)
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        puts("");
    }
}

void zero_mat(int r,int c,int **a)
{
    int i,j,s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0) s=1;
            else
            {
                s=0;
                break;
            }
        }
    }
    if(s) printf("YES,it is a zero matrix.\n");
    else printf("NO,it is not a zero matrix.\n");
}

void dia_mat(int r,int **a)
{
    int i,j,s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i!=j)
            {
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        puts("");
    }
}

void idn_mat(int r,int **a)
{
    int i,j,s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1) s=1;
                else
                {
                    s=0;
                    break;
                }
            }
            else
                if(a[i][j]==0) s=1;
                else
                {
                    s=0;
                    break;
                }
        }
        if(s==0) break;
    }
    if(s) printf("YES,it is a identity matrix.\n");
    else printf("NO,it is not a identity matrix.\n");
}

void read(int r, int c, int **arr)
{
    int i, j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &arr[i][j]);
    return;
}

void print(int r, int c, int **arr)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ", arr[i][j]);
        puts("");
    }
}

void sum(int r, int c, int **a, int **b)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]+b[i][j]);
        puts("");
    }
}

void sub(int r, int c, int **a, int **b)
{
    int i, j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j] - b[i][j]);
        puts("");
    }
}

void mult(int r, int c, int p, int q, int **a, int **b)
{
    int i, j, k, n[r][q];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<q;j++)
        {
            n[i][j]=0;
            for(k=0;k<c;k++)
                n[i][j] += a[i][k] * b[k][j];
       }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<q;j++) printf("%d ",n[i][j]);
        puts("");
    }
}

void trnp(int r, int c, int **a)
{
    int i, j, n[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) n[j][i]=a[i][j];
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",n[i][j]);
        puts("");
    }
    
}

void main()
{
    printf("\t\t\t\t\t\t\tMATRIX CALCULATOR\t\t\t\t\t\t\t\n");
    
    printf("CHOOSE : \n1.Sum of matrices\n2.Subtraction of matrices\n3.Multiplication of matrices\n4.Transpose of matrix\n5.Upper triangle of matrix\n6.Lower triangle of matrix\n7.Diagonal Matrix\n8.Zero Matrix\n9.Identity matrix\n\n");
    
    printf("Enter your option : ");

    int o;
    scanf("%d",&o);
    
    int r,c,m,n;
    
    int **a,**d,**b;

    switch(o)
    {
        case 1:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }

            d=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                d[i]=(int *)malloc(r*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nEnter elements of mat2 : \n");
            read(r,r,d);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            printf("\n");

            printf("\nElements of mat2 : \n");
            print(r,r,d);

            printf("\n");

            printf("\nSum of Matrices :\n");
            sum(r,r,a,d);
            break;
        case 2:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }

            d=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                d[i]=(int *)malloc(r*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nEnter elements of mat2 : \n");
            read(r,r,d);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            printf("\n");

            printf("\nElements of mat2 : \n");
            print(r,r,d);

            printf("\n");

            printf("\nSubtraction of Matrices :\n");
            sub(r,r,a,d);
            break;
        case 3:
            printf("\nEnter row of mat1 : ");
            scanf("%d",&r);
    
            printf("\nEnter column of mat1 : ");
            scanf("%d",&c);
            
            printf("\nEnter row of mat2 : ");
            scanf("%d",&m);
    
            printf("\nEnter column of mat2 : ");
            scanf("%d",&n);

            if(c!=m)
            {
                printf("\nWrong Input!!!\n");
                break;
            }

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<c;i++)
            {
                a[i]=(int *)malloc(c*sizeof(int));
            }

            b=(int **)malloc(m*sizeof(int));
            for(int i=0;i<c;i++)
            {
                b[i]=(int *)malloc(n*sizeof(int));
            }

            printf("\nEnter elements of mat1 : \n");
            read(r,c,a);

            printf("\nEnter elements of mat2 : \n");
            read(m,n,b);

            printf("\nElements of mat1 : \n");
            print(r,c,a);

            printf("\n");

            printf("\nElements of mat2 : \n");
            print(m,n,b);

            printf("\n");

            printf("\nMultiplication of Matrices :\n");
            mult(r,c,m,n,a,b);
            break;
        case 4:
            printf("\nEnter row: ");
            scanf("%d",&r);
    
            printf("\nEnter column: ");
            scanf("%d",&c);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<c;i++)
            {
                a[i]=(int *)malloc(c*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,c,a);

            printf("\nElements of mat1 : \n");
            print(r,c,a);

            printf("\nTranspose of matrix : \n");
            trnp(r,c,a);
            break;
        case 5:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);
            
            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }

            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            printf("\nUpper triangle of matrix : \n");
            
            upp(r,a);
            break;
        case 6:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            printf("\nLower triangle of matrix : \n");
            
            low(r,a);
            break;
        case 7:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            printf("\nDiagoanl matrix of matrix : \n");
            
            dia_mat(r,a);
            break;
        case 8:
            printf("\nEnter row: ");
            scanf("%d",&r);
    
            printf("\nEnter column: ");
            scanf("%d",&c);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<c;i++)
            {
                a[i]=(int *)malloc(c*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,c,a);

            printf("\nElements of mat1 : \n");
            print(r,c,a);

            zero_mat(r,c,a);
            break;
        
        case 9:
            printf("\nEnter order of matrix : ");
            scanf("%d",&r);

            a=(int **)malloc(r*sizeof(int));
            for(int i=0;i<r;i++)
            {
                a[i]=(int *)malloc(r*sizeof(int));
            }
            
            printf("\nEnter elements of mat1 : \n");
            read(r,r,a);

            printf("\nElements of mat1 : \n");
            print(r,r,a);

            idn_mat(r,a);
            break;
        
        default:
            printf("\n\n\n\n\n\t\t\t\t\tWRONG DECISION....ERROR 404!!!\n\n\n\n\n");

    }

    printf("\n\n\n\n");

}