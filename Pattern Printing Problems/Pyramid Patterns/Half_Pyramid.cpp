#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

*
* *
* * *
* * * *
* * * * *
* * * * * *

*/

void printHalfPyramid(int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
     for(j=1;j<=i;j++)
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

printHalfPyramid(n);

}