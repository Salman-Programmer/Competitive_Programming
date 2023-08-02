#include<bits/stdc++.h>
using namespace std;
/*
Print the following pattern
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
            
*/
void printNumbersTriangle() 
{
   int i,j,k;

   for(i=1;i<=4;i++)
   {
   	  k = 1;
      for(j=1;j<=7;j++)
      {
        if(j>=5-i && j<=i+3){
        	cout << k;
        	j<4? k++: k--;
           }
        else{
        	cout << " ";}
      }  
      cout << endl; 
   } 
}

int main()
{
	printNumbersTriangle();
}
