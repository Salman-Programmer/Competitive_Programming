#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

   *********
   **** ****
   ***   ***
   **     **
   *       *
   **     **
   ***   ***
   **** ****
   *********   


*/

void printFourthComplexPattern()
{
     int i,j,k=0;

     for(i=1;i<=9;i++)
     {
     	i<=5?k++:k--;
      for(j=1;j<=9;j++)
         {
         	
         	if(j<=6-k || j>=4+k){
         		cout << "*";}
         		else{
         			cout << " ";
         		}

     	 	
         }
     cout << endl;
     }   
}

int main (){
printFourthComplexPattern();

}