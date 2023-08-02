#include<bits/stdc++.h>
using namespace std;
/*
Print the following pattern
     A B C D C B A
     A B C   C B A
     A B       B A
     A           A
            
*/
void printLetterComplexPattern() 
{
   int i,j;
    char k;
   for(i=1;i<=4;i++)
   {
    	k = 'A';
      for(j=1;j<=7;j++)
      {
        if(j<=5-i || j>=i+3){
        	cout << k;
        	j<4?k++:k--;}        
        else{
        	cout << " ";
        	if (j==4){
        		k--;}}	
        
      }  
      cout << endl; 
   } 
}

int main()
{
	printLetterComplexPattern();
}
