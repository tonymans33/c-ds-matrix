#include <iostream>
#include <fstream>
#include "matrix.h"
using namespace std;

int main()
{
    int choice,row,col,row1,col1,transChoice;

    string choice2;
    cout<<"Enter the first matrix size rows x columns "<<endl;
    cin>>row>>col;
    matrix <int>a(row,col);
    matrix<int>c(row,col);
    cout<<"Enter the first matrix elements "<<endl;
    cin>>a ;
    cout<<"Enter the second matrix size rows x columns "<<endl;
    cin>>row1>>col1;
    matrix <int> b(row1,col1);
    cout<<"Enter the second matrix elements "<<endl;
    cin>>b;

    Do :
     {
    cout<<"Choose an operation from below "<<endl;
    cout<<" 1- Perform Matrix Addition \n 2- Perform Matrix Subtraction \n 3- Perform Matrix Multiplication \n 4- Matrix Transpose "<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Performing a matrix addition"<<endl;
        cout<<"The addition of the two matrix is "<<endl;
         c=a+b;
        //cout<<c;
        cout<<"press 'a' if you want to perform another operation , 'b' for exit ";
        cin>>choice2;
         if(choice2=="a")
            {
                goto Do;
            }
        else
           {
                cout<<"Thank you for using this program"<<endl;
           }

    }
       else if(choice==2)
    {
        cout<<"Performing a matrix subtraction "<<endl;
        c = a - b;
        cout<<"The subtraction of the two matrix is "<<endl;
        //cout<<c;
        cout<<"press 'a' if you want to perform another operation , 'b' for exit ";
        cin>>choice2;
        if(choice2=="a")
            {
                 goto Do;
            }
       else
            {
                cout<<"Thank you for using this program"<<endl;
            }
    }
       else if(choice==3)
    {
        cout<<"Performing a matrix multiplication "<<endl;
        c = a * b;
        cout<<"The subtraction of the two matrix is "<<endl;
        //cout<<c;
        cout<<"press 'a' if you want to perform another operation , 'b' for exit ";
        cin>>choice2;
        if(choice2=="a")
        {
            goto Do;
        }

       else
       {
           cout<<"Thank you for using this program"<<endl;
       }

    }
       else if(choice==4)
    {
        cout<<"Performing a matrix transpose"<<endl;
        cout<<"press '1' to transpose the first matrix \n press '2' to transpose the second matrix "<<endl;
        cin>>transChoice;
         if(transChoice==1)
         {
             a.transpose();
         }
         else if(transChoice==2)
         {
             b.transpose();
         }

       cout<<"press 'a' if you want to perform another operation , 'b' for exit ";
       cin>>choice2;
       if(choice2=="a")
       {
           goto Do;
       }
    else
    {
        cout<<"Thank you for using this program"<<endl;
    }
    }

     };

}

