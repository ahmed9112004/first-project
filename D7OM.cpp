#include <iostream>
using namespace std ;
int main (){
  int num_of_num;
  cin >> num_of_num ;
long long  num ;
int  even =0, odd=0 ,positive=0 , negative=0 ;
for (int i=1;i<=num_of_num;i++){
  cin >> num ;
  if (num % 2 == 0)
  even++;
   if (num % 2 != 0)
  odd++;
    if (num > 0)
  positive++;
    if (num < 0)
  negative++;
    }
    cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<positive<<"\nNegative: "<<negative<<"\n";
 return 0;}
  
    
     


