#include<bits/stdc++.h>
using namespace std;
/*
Print the following pattern
           
           *
           * *
           * * *
           * * * *
           * * *
           * *
           *
            
*/
void printThirdTriangle() 
{
   int i,j,n,formula,k=0;
   cout << "Please enter any number ";
   cin >> n;
   formula = (n+1)/2;
   for(i=1;i<=n;i++)
   {
    	i<=formula?k++:k--;
      for(j=1;j<=formula;j++)
      {
        if(j>=1 && j <= k){
        	
        	cout << "*";
        	}        
        else{
        	cout << " ";}
    	
        
      }  
      cout << endl; 
   } 
}

int main()
{

	printThirdTriangle();
}
