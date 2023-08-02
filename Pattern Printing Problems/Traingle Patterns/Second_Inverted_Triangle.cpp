#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

   *********
    *******
     *****
      ***
       *
*/

void printSecondInvertedTriangle()
{
     int i,j;

     for(i=1;i<=5;i++)
     {
     	
      for(j=1;j<=9;j++)
         {
         	
         	if(j>=i && j<=10-i){
         		cout << "*";}
         		else{
         			cout << " ";
         		}

     	 	
         }
     cout << endl;
     }   
}

int main (){
printSecondInvertedTriangle();

}