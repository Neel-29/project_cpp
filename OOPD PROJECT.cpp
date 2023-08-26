#include<iostream>
using namespace std;

class Matrix
{
    public:
        int O,r,c,m,n;
        int **a,**b,**d;

        Matrix()
        {
            printf("\t\t\t\t\t\t\tMATRIX CALCULATOR\t\t\t\t\t\t\t\n");
            printf("CHOOSE : \n1.Sum of matrices\n2.Subtraction of matrices\n3.Multiplication of matrices\n4.Transpose of matrix\n5.Upper triangle of matrix\n6.Lower triangle of matrix\n7.Diagonal Matrix\n8.Zero Matrix\n9.Identity matrix\n\n");
            printf("Enter your option : ");
            cin>>O;
            switch(O)
            {
                case 1:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;

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
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nEnter elements of mat2 : \n";
                    read(r,r,d);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    cout<<endl;

                    cout<<"\nElements of mat2 : \n";
                    print(r,r,d);

                    cout<<"\n";

                    cout<<"\nSum of Matrices :\n";
                    sum(r,r,a,d);
                    break;
                case 2:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;

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
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nEnter elements of mat2 : \n";
                    read(r,r,d);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    cout<<endl;

                    cout<<"\nElements of mat2 : \n";
                    print(r,r,d);

                    cout<<"\n";

                    cout<<"\nSubtraction of Matrices :\n";
                    sub(r,r,a,d);
                    break;
                case 3:
                    cout<<"\nEnter row of mat1 : ";
                    cin>>r;
    
                    cout<<"\nEnter column of mat1 : ";
                    cin>>c;
            
                    cout<<"\nEnter row of mat2 : ";
                    cin>>m;
    
                    cout<<"\nEnter column of mat2 : ";
                    cin>>n;

                    if(c!=m)
                    {
                        cout<<"\nWrong Input!!!\n";
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

                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,c,a);

                    cout<<"\nEnter elements of mat2 : \n";
                    read(m,n,b);

                    cout<<"\nElements of mat1 : \n";
                    print(r,c,a);

                    cout<<endl;

                    cout<<"\nElements of mat2 : \n";
                    print(m,n,b);

                    cout<<endl;

                    cout<<"\nMultiplication of Matrices :\n";
                    mult(r,c,m,n,a,b);
                    break;
                case 4:
                    cout<<"\nEnter row: ";
                    cin>>r;
    
                    cout<<"\nEnter column: ";
                    cin>>c;

                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<c;i++)
                    {
                        a[i]=(int *)malloc(c*sizeof(int));
                    }
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,c,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,c,a);

                    cout<<"\nTranspose of matrix : \n";
                    trnp(r,c,a);
                    break;
                case 5:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;
            
                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<r;i++)
                    {
                        a[i]=(int *)malloc(r*sizeof(int));
                    }

                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    cout<<"\nUpper triangle of matrix : \n";

                    upp(r,a);
                    break;
                case 6:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;

                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<r;i++)
                    {
                        a[i]=(int *)malloc(r*sizeof(int));
                    }
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    cout<<"\nLower triangle of matrix : \n";
            
                    low(r,a);
                    break;
                case 7:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;

                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<r;i++)
                    {
                        a[i]=(int *)malloc(r*sizeof(int));
                    }
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    cout<<"\nDiagoanl matrix of matrix : \n";
            
                    dia_mat(r,a);
                    break;
                case 8:
                    cout<<"\nEnter row: ";
                    cin>>r;
    
                    cout<<"\nEnter column: ";
                    cin>>c;

                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<c;i++)
                    {
                        a[i]=(int *)malloc(c*sizeof(int));
                    }
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,c,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,c,a);

                    zero_mat(r,c,a);
                    break;
        
                case 9:
                    cout<<"\nEnter order of matrix : ";
                    cin>>r;

                    a=(int **)malloc(r*sizeof(int));
                    for(int i=0;i<r;i++)
                    {
                        a[i]=(int *)malloc(r*sizeof(int));
                    }
            
                    cout<<"\nEnter elements of mat1 : \n";
                    read(r,r,a);

                    cout<<"\nElements of mat1 : \n";
                    print(r,r,a);

                    idn_mat(r,a);
                    break;
        
                default:
                    cout<<"\n\n\n\n\n\t\t\t\t\tWRONG DECISION....ERROR 404!!!\n\n\n\n\n";

            }

            cout<<"\n\n\n\n";
        }

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
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
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
                    cout<<a[i][j]<<" ";
                }   
                cout<<endl;
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
            if(s) cout<<"YES,it is a zero matrix.\n";
            else cout<<"NO,it is not a zero matrix.\n";
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
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
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
            if(s) cout<<"YES,it is a identity matrix.\n";
            else cout<<"NO,it is not a identity matrix.\n";
        }

        void read(int r, int c, int **arr)
        {
            int i, j;
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    cin>>arr[i][j];
        }

        void print(int r, int c, int **arr)
        {
            int i, j;
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }
        }

        void sum(int r, int c, int **a, int **b)
        {
            int i, j;
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                    cout<<a[i][j]+b[i][j]<<" ";
                cout<<endl;
            }
        }

        void sub(int r, int c, int **a, int **b)
        {
            int i, j;
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                    cout<<a[i][j] - b[i][j]<<" ";
                cout<<endl;
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
                for(j=0;j<q;j++) cout<<n[i][j]<<" ";
                cout<<endl;
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
                    cout<<n[i][j]<<" ";
                cout<<endl;
            }
        }
};

int main()
{
    Matrix obj;
}