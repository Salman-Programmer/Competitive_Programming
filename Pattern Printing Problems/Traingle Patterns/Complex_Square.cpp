#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
     * * * * * * *
     *           *
     *   * * *   *
     *   *   *   *
     *   * * *   *
     *           *
     * * * * * * *

*/

void printComplexSquare()
{
     int i,j,k;
     for(i=1;i<=7;i++)
     {
     	k = 1;
      for(j=1;j<=7;j++)
         {
         			
         	if((i==1 || i == 7 || j ==1 || j == 7 )||(i >= 3 && i <=5 && j >=3  && j <=5) && ( i ==3 || i ==5 || j == 3 || j == 5)){
         			cout << "*";}	
         		else{
         			
         				
         			cout << " ";}

        	
         }
     
     cout << endl;
     }   
}

int main (){
printComplexSquare();
}

