#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

  * * * * *
    * * * *
      * * *
        * *
          *

*/

void printReflectedPyramid(int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=n;j++)
         {
         if(j>=i ){	
     	cout << "*";}
     	else{
     		cout << " ";
     	}		
         }
     cout << endl;
     }   
}

int main (){
	int n;
	cout << "Enter any number ";
	cin >> n;
printReflectedPyramid(n);

}