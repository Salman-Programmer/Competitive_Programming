#include<bits/stdc++.h>
using namespace std;

/* 
Print the following pattern.
   *****
   *   *
   *   *
   *   *
   ***** 
*/

void printHallowRectangle(int rows,int columns)
{
  int i,j;
for(i = 1; i <= rows; i++)
   {
	for(j = 1; j <= columns; j++)
	   { 
	   	if(i == 1 || i == rows || j == 1 || j == columns){
	   		cout << "*";
	   	}else{
	   		cout << " ";
	   	} 
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
  printHallowRectangle(rows,columns);
}