#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
       1
       10
       101
       1010
       10101
       101010 
       
*/

void printZeroOneTriangle()
{
     int i,j,k;
     for(i=1;i<=6;i++)
     {
     	k = 1;
      for(j=1;j<=6;j++)
         {
         	
         	if(j>=1 && j<=i){
         			cout << k;	
         			k = 1 - k;}	
         		else{
         			cout << " ";}
        	
         }
     cout << endl;
     }   
}

int main (){
printZeroOneTriangle();

}