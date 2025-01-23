#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
    float matriz1[3][3] = {{0,0,1},{30,10,1},{10,30,1}};
    Matrix m1(3,3,**matriz1);

    for(int i = 0; i <3; i++)
      for(int j = 0; j < 3; j++)
          m1.SET(i,j,matriz1[i][j]);
    for(int i = 0; i <3; i++)
    {
      for(int j = 0; j < 3; j++)
          cout<<  m1.GET(i,j)<<"   ";
      cout<<endl;
    }

   cout<<endl;

   Matrix m2(m1);//CONSTRUCTOR DE COPIA
   float matriz2_1[3][3] = {{1,0,0},{0,1,0},{2,0,1}};
   for(int i = 0; i <3; i++)
       for(int j = 0; j < 3; j++)
           m2.SET(i,j,matriz2_1[i][j]);
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m2.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   //  m1 *= m2;
   Matrix m3 = m1 * m2;
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m3.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   for(int i = 0; i <3; i++)
       for(int j = 0; j < 3; j++)
           m1.SET(i,j,matriz1[i][j]);
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m1.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   float matriz2_2[3][3] = {{1,0,0},{0,1,0},{0,2,1}};
   for(int i = 0; i <3; i++)
       for(int j = 0; j < 3; j++)
           m2.SET(i,j,matriz2_2[i][j]);
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m2.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   //  m1 *= m2;
   m3 = m1 * m2;
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m3.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   for(int i = 0; i <3; i++)
       for(int j = 0; j < 3; j++)
           m1.SET(i,j,matriz1[i][j]);
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m1.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   float matriz2_3[3][3] = {{1,0,0},{0,1,0},{2,2,1}};
   for(int i = 0; i <3; i++)
       for(int j = 0; j < 3; j++)
           m2.SET(i,j,matriz2_3[i][j]);
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m2.GET(i,j)<<"   ";
       cout<<endl;
   }

   cout<<endl;

   //  m1 *= m2;
   m3 = m1 * m2;
   for(int i = 0; i <3; i++)
   {
       for(int j = 0; j < 3; j++)
           cout<<  m3.GET(i,j)<<"   ";
       cout<<endl;
   }

    cout<<endl;


    return 0;
}
