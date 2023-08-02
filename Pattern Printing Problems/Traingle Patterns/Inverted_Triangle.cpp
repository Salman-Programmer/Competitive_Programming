#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

       * * * * * * * * *
         * * * * * * *
           * * * * *
             * * *
               *
                        
*/

void printInvertedTriangle()
{
     int i,j,n;
      cout << "Please enter any number ";
      cin >> n;
     

     for(i=1;i<=n;i++)
     {
      for(j=1;j<=(n*2)-1;j++)
         {
         if(j>=i && j<= (n*2)-i ){	
     	cout << "*";}
     	else{
     		cout << " ";
     	}		
         }
     cout << endl;
     }   
}

int main (){
printInvertedTriangle();

}