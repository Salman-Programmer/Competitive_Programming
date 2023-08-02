#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

       A1
      AB12
     ABC123
    ABCD1234

*/

void printLetterPlusNumberTriangle()
{
     int i,j,x;
     char k;

     for(i=1;i<=4;i++)
     {
     	k = 'A';
     	x = 1;
      for(j=1;j<=8;j++)
         {
         	
         	if(j>=5-i && j<=4+i){
         		if(j<5){
         		cout << k;
         		k++;}else{
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
printLetterPlusNumberTriangle();

}