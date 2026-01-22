#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
  int rows=4;
  int col=3;
  int key=8;
  for(int i=0;i<rows;i++){
      for (int j=0;j<col;j++){
         if(matrix[i][j]==key){
             cout<<i<<endl;
             cout<<j<<endl;
             break;
         }
      }
  }
  
  return 0;
}