#include <iostream>

using namespace std;

struct matrix
{
    int row,col;
    int *data;
};

void createMatrix (int row, int col, int num[], matrix& mat);
//Student #3 with the biggest ID (e.g., 20170089)
ostream& operator<< (ostream& out, matrix mat);
// Print matrix  as follows (2 x 3)			4	 6 	  8
// and return ostream to cascade printing	9	12  	123
bool   operator== (matrix mat1, matrix mat2);	// True if identical
bool   operator!= (matrix mat1, matrix mat2); 	// True if not same
bool   isSquare   (matrix mat);  // True if square matrix
bool   isSymetric (matrix mat);  // True if square and symmetric
bool   isIdentity (matrix mat);  // True if square and identity
matrix transpose(matrix mat);    // Return new matrix with the transpose

int main()
{
    int arr[]={1,2,3,4};
    int arr2[]={5,6,7,8};
    matrix mat1;
    matrix mat2;
    createMatrix(2,2,arr,mat1);
    createMatrix(2,2,arr2,mat2);

    if (mat1==mat2)
        cout<<"1";
        else
            cout<<"2";

    return 0;
}
void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data = new int [row * col];
    for (int i = 0; i < row * col; i++)
        mat.data [i] = num [i];
}
ostream& operator<< (ostream& out, matrix mat)
{
    for(int i=0 ; i<mat.row ; i++)
    {
        for(int j=0 ; j<mat.col ; j++)
            out<<mat.data[i*mat.col+j]<<" ";
        out<<endl;
    }
    return out;
}
bool operator== (matrix mat1, matrix mat2)
{
    for(int i=0 ; i<mat1.row*mat1.col ; i++)
    {
        if (mat1.data[i]!=mat2.data[i])
            return false;
    }
    return true;
}
bool operator!=(matrix mat1,matrix mat2)
{
    for(int i=0 ; i<mat1.row*mat1.col ; i++)
    {
        if (mat1.data[i]==mat2.data[i])
            return false;
    }
    return true;
}
bool   isSquare   (matrix mat)
{
    if (mat.row==mat.col)
        return true;
    return false;
}
bool isSymetric(matrix mat)
{
    bool symetric  =true;
    if(isSquare(mat)){
        for(int i=0;i<mat.row;i++){
            for(int j=0;j<mat.col;j++){
                if(mat.data[(i*mat.row)+j]!=mat.data[(j*mat.row)+i]){
                    symetric=false;
                    return symetric;
                }
            }
        }
    }
    return symetric;
}
bool isidentity (matrix mat)
{
    bool identity =true;
    if(isSquare(mat)){
        for(int i=0;i<mat.row*mat.col;i+=(mat.col +1)){
            if(mat.data[i] !=1)
                return false;
            if (i==(mat.row*mat.col)-1)
                break;
            for (int j=i+1;j<=mat.row;j++){
                if(mat.data[j]!=0)
                    return false;
            }
        }
    }
    return identity;
}
matrix transpose (matrix mat)
{
    int turns=0,currentposition=0;
    matrix mat2;
    int*arr=new int[mat.row*mat.col];
    creatematrix(mat.row,mat.col,arr,mat2);
    for(int i=0;i<mat.row*mat.col;i++){
        turns=i/mat.row;
        currentposition=(i*mat.row)%)(mat.col * mat.row);
        mat2.data[i]=mat.data[turns+currentposition];
    }
    return mat2;
}



