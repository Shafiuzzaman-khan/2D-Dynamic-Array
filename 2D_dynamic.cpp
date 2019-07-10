#include<iostream>

using namespace std;

int main ()
{
     int row;
    cout<<"enter row"<<endl;
     cin>>row;
     int column;
     cout<<"enter column"<<endl;
     cin>>column;
     int **Array = new int*[row];


    for(int i=0; i<row; i++)
    {
        Array[i] = new int [column];
    }
    int i, j;
    //Insert Elements
    cout<<"Enter Elements: ";
    for(i=0; i<row;i++)
    {
       for(j=0; j<column; j++)
       {
           cin>>Array[i][j];
       }
    }
    //Print Array
    cout<<"Entered elements are: "<<endl;
    for(i=0;i<row;i++)
    {
       for(j=0;j<column;j++)
       {
           cout<<Array[i][j]<<"  ";
       }
       cout<<endl;
    }

    //Delete Array
    delete[] Array;

}

