#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
          *****
         *****
        *****
       *****     
       
*/

void printStrangePattern()
{
     int i,j;
     

     for(i=1;i<=4;i++)
     {
     	
      for(j=1;j<=7;j++)
         {
         	
         	if(j>=5-i && j<=8-i){
         		cout << "*";	
         	}

         		else{
         			cout << " ";
         		}

     	 	
         }
     cout << endl;
     }   
}

int main (){
printStrangePattern();

}