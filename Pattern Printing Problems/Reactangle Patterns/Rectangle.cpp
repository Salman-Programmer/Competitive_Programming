#include<bits/stdc++.h>
using namespace std;

/* 
Print the following pattern.
   *****
   *****
   *****
   *****
   ***** */

void printRectangle(int rows,int columns)
{
  int i,j;
for(i = 1; i <= rows; i++)
   {
	for(j = 1; j <= columns; j++)
	   { 
        cout << "*";   
	   }
	cout<< endl;
   }
}

int main () 
{
  int rows,columns;	
  cout << "Please enter the number of rows ";
  cin  >> rows;
  cout << "Please enter the number of columns ";
  cin >> columns;
  printRectangle(rows,columns);
}