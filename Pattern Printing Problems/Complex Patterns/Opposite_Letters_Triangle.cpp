#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
                      A
                      BA
                      CBA
                      DCBA             
*/

void printOppositeLettersTriangle()
{
     int i,j;
     char k;
    
   
     for(i=1;i<=4;i++)
     {
         
       k=64+i;
     
      for(j=1;j<=4;j++)
         {
       			
         	if(j>=1 && j<=i){
               cout << k;
               k--;  
              }	
         	else{
         			cout << " ";}

         }
     
     cout << endl;
     }   
}

int main (){
printOppositeLettersTriangle();
}

