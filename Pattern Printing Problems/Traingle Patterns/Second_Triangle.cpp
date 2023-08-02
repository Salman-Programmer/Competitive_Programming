#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

               *
              * *
             * * * 
            * * * * 
           * * * * *

*/

void printSecondTriangle()
{
     int i,j,k,n;
     cout << "Please enter any number ";
     cin >> n;
     for(i=1;i<=n;i++)
     {
     	k = 1;
      for(j=1;j<=(n*2)-1;j++)
         {
         if(j>=n+1-i && j<= n-1 +i && k ){	
     	cout << "*";
         k = 0;
     }
     	else{
     		cout << " ";
     		k = 1;
     	}		
         }
     cout << endl;
     }   
}

int main (){
printSecondTriangle();

}