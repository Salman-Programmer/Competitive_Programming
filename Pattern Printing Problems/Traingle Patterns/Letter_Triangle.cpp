#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

       A
      ABA
     ABCBA
    ABCDCBA

*/

void printLetterTriangle()
{
     int i,j;
     char k;

     for(i=1;i<=4;i++)
     {
     	k = 'A';
      for(j=1;j<=7;j++)
         {
         	
         	if(j>=5-i && j<=3+i){
         		
         		cout << k;
                j<4?k++:k--;
         	}

         		else{
         			cout << " ";
         		}

     	 	
         }
     cout << endl;
     }   
}

int main (){
printLetterTriangle();

}