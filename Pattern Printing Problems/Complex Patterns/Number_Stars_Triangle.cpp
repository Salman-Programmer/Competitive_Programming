#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
              1
              3*2
              4*5*6
              10*9*8*7
              11*12*13*14*15    
*/

void printNumberStarTriangle()
{
     int i,j,flag=1,k,p;
    
    k=0;
   
     for(i=1;i<=5;i++)
     {
     	if(i%2==1){
     		k = k+1;
     	}else{
     		k--;
     		k=k+i;
     	}
         
    flag = 1;
       p=k;
      for(j=1;j<=9;j++)
         {
       		
         	if( j<=(i*2)-1){
              if (flag==1)
              {
              	cout << p;
              	if(i%2){
              		p++;
              		k++;
              	}else{
              		p--;
              	}
              }else{
               cout << "*";
              }
              }	
         	else{
         			cout << " ";}
         	flag = 1 - flag;

         }
     
     cout << endl;
     }   
}

int main (){
printNumberStarTriangle();
}

