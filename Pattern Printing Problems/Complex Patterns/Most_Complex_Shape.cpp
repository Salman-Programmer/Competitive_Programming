#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern
          
                           0
                          121
                         23432
                        3456543
                       456787654
                      56789098765
                     6789012109876
                    789012343210987
                   89012345654321098
                  9012345678765432109
                 012345678909876543210
                  9012345678765432109
                   89012345654321098
                    789012343210987
                     6789012109876
                      56789098765
                       456787654
                        3456543
                         23432
                          121
                           0

                  
*/

void printMostComplexShape()
{
     int i,j,k,x;
     x=0;
     for(i=1;i<=21;i++)
     {
         
         i<=11?k++:k--;
         x = k - 1;
     
      for(j=1;j<=21;j++)
         {
         			
         	if(j>=12-k && j<=10+k){
               cout << x%10;
               j<11?x++:x--;}	
         	else{
         			cout << " ";}

         }
     
     cout << endl;
     }   
}

int main (){
printMostComplexShape();
}

