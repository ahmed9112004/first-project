#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main()
{

  int k ,s  ,num_of_values =0;
  cin >> k >>s ;
   //int i3 ;
  for(int i1=0 ;i1<=k ;i1++){
    for(int i2=0 ;i2<=k ;i2++){
   int i3 = s - i1 - i2;
            if (i3 >= 0 && i3 <= k)
            num_of_values++ ;


    }
  }
  cout<<num_of_values<<"\n";
 return 0;

}
