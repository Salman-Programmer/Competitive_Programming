#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

               1
             1 2 
           1 2 3 
         1 2 3 4
       1 2 3 4 5
         1 2 3 4
           1 2 3
             1 2
               1


*/

void printFourthNumberTriangle()
{
     int i,j,k=0,x;

     for(i=1;i<=9;i++)
     {
     x = 1;
     	i<6?k++:k--;
     	
      for(j=1;j<=5;j++)
         {

         if(j>=6-k){
     	cout << x;
     	x++;
     }
     	else{

     		cout << " ";
     	}		
         }
     cout << endl;
     }   
}

int main (){
printFourthNumberTriangle();

}