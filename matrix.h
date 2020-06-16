#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <fstream>
using namespace std;
template <class T>
class matrix
{
      private:
        int rows;
        int cols;
        T** items;
    public:

    matrix(int rows,int cols)
    {
    this->rows = rows;
    this->cols = cols;
    items = new T*[rows];
    for (int i = 0; i < rows; i++)
    {
          items[i] = new T[cols];
    }

    }

         ~matrix() { delete items;}
         friend istream& operator>>(istream &in , const matrix& m)
         {

            for(int i=0;i<m.rows;i++)
             {
                 for(int j=0;j<m.cols;j++)
                 {
                     in>>m.items[i][j];
                 }
             }
             return in;
         }

         friend ostream& operator<<(ostream &out , const matrix& m)
         {

             for(int i=0;i<m.rows;i++)
             {
                 for(int j=0;j<m.cols;j++)
                 {
                     out<<m.items[i][j]<<" " ;
                 }
                 out<<endl;
             }
             return out;
}
         void operator=(const matrix&m)
         {

                 for(int i=0;i<rows;i++)
             {
                 for(int j=0;j<cols;j++)
                 {
                     items[i][j] = m.items[i][j];
                 }
             }
         }
         matrix operator+( const matrix& m)
         {
     if(cols !=m.cols || rows!=m.rows)
    {
        cout<<"The two matrix must be the same size"<<endl;
    }
    else
    {
        matrix<T> newMatrix(rows,cols);
          for(int i=0;i<rows;i++)
             {
                   for(int j=0;j<cols;j++)
                   {
                       newMatrix.items[i][j] = items[i][j] + m.items[i][j];

                   }
             }
             cout<<newMatrix<<endl;
             return newMatrix;
    }

         }

         matrix operator-(const matrix& m)
         {
    if(cols !=m.cols || rows!=m.rows)
    {
        cout<<"The two matrix must be the same size"<<endl;
    }
    else{
         matrix<T> newMatrix(rows,cols);
          for(int i=0;i<rows;i++)
             {
                   for(int j=0;j<cols;j++)
                   {
                       newMatrix.items[i][j] = items[i][j] - m.items[i][j];
                   }

             }
              cout<<newMatrix<<endl;
             return newMatrix;
    }

}
         matrix operator*(const matrix& m)
         {
        matrix<T> newMatrix(rows,cols);
          for(int i=0;i<rows;i++)
             {
                   for(int j=0;j<cols;j++)
                   {
                       for(int k=0;k<cols;++k)
                       newMatrix.items[i][j] += items[i][k] * m.items[k][j];
                   }
             }
              cout<<newMatrix<<endl;
             return newMatrix;
}
         void transpose()
         {
    for(int i=0;i<rows;i++)
             {
                 for(int j=0;j<cols;j++)
                 {
                     cout<<items[j][i]<<" " ;
                 }
                 cout<<endl;
             }
}
};
#endif // MATRIX_H




















