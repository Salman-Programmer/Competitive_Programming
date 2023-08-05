#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
                1
               212
              32123
             4321234      
*/

void printDecRecNumbersTriangle()
{
     int i,j,k,x=1;
    
    
   
     for(i=1;i<=4;i++)
     {
         
      k=i;
 
      for(j=1;j<=7;j++)
         {
       		
         	if(j>=5-i && j<=3+i){
               cout << k;
              j<4?k--:k++;
             
              }	
         	else{
         			cout << " ";}

         }
     
     cout << endl;
     }   
}

int main (){
printDecRecNumbersTriangle();
}

