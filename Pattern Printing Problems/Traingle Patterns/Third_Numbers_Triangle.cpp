#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

       6 5 4 3 2 1 0
       5 4 3 2 1 0
       4 3 2 1 0
       3 2 1 0
       2 1 0
       1 0
       0
                     
*/

void printInvertedTriangle()
{
     int i,j,k;
     for(i=1;i<=7;i++)
     {
     	k = 8 - i;
      for(j=1;j<=7;j++)
         {
         if(j>=1 && j<= 8 - i ){	
         	k--;
     	cout << k;
     }
     	else{
     		cout << " ";
     	}		
         }
     cout << endl;
     }   
}

int main (){
printInvertedTriangle();

}