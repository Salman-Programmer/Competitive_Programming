#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
            1
           12A
          123AB
         1234ABC   
       
*/

void printNumberPlusLettersTriangle()
{
     int i,j,k;
     char x ;
      
     for(i=1;i<=4;i++)
     {
     	k=1;
     	x = 'A';
      for(j=1;j<=7;j++)
         {
         	
         	if(j>=5-i && j<=3+i){
         		if(j<5){
         			cout << k;
         			k++;
         		}else{
         			cout << x;
                  x++;
         		}	
         	}

         		else{
         			cout << " ";
         		}

     	 	
         }
     cout << endl;
     }   
}

int main (){
printNumberPlusLettersTriangle();

}