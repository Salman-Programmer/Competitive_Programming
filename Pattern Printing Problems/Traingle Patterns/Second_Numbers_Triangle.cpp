#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

         1
       2 3 2
     3 4 5 4 3
   4 5 6 7 6 5 4
                     
*/

void printInvertedTriangle()
{
     int i,j,k;
          k=0;
     for(i=1;i<=4;i++)
     {
     	
      for(j=1;j<=7;j++)
         {
         if(j>=5-i && j<= 3 + i ){	
         	j<=4?k++:k--;
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