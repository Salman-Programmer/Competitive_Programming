#include<bits/stdc++.h>
using namespace std;
/*
Print the following pattern
           
            *
          * * *
        * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
            
*/
void printLetterComplexPattern() 
{
   int i,j,n,formula,k=0;
   cout << "Please enter a number ";
   cin >> n;
   formula = (n+1)/2;
  
   for(i=1;i<=n;i++)
   {
    	i<=formula?k++:k--;
      for(j=1;j<=n;j++)
      {
        if(j>=formula+1-k && j<=formula-1+k ){
        	
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

	printLetterComplexPattern();
}
