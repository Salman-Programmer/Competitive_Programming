#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

void printInvertedPyramid(int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
      for(j=1;j>=1 && j<=(n+1)-i;j++)
         {	
     	cout << "*";		
         }
     cout << endl;
     }   
}

int main (){
int n;
cout << "Enter any number ";
cin >> n;

printInvertedPyramid(n);

}