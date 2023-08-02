#include <bits/stdc++.h>
using namespace std;
/*
Print the following pattern

          \*****/
//        *\***/*       
//        **\*/**
//        ***/***
//        **/*\**
//        */***\*
          /*****\

*/

void printThirdComplexPattern()
{
     int i,j;

     for(i=1;i<=7;i++)
     {
      for(j=1;j<=7;j++)
         {
         	if(j==8-i){
         		cout << "/";
         	}
         	else{
         		if(j==i){
         			cout << "\\";
         		}else{
         			cout << "*";
         		}

     	 }	
         }
     cout << endl;
     }   
}

int main (){
printThirdComplexPattern();

}