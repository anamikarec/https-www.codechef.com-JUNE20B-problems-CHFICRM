#include<bits/stdc++.h>
using namespace std;

int main()
 {
  int test;
  cin>>test;
  while(test--)
  {
    int m;
    cin>>m;
    int arr[m];
    int slag=1,nooffive=0,nooften=0;
    for(int i=0;i<m;i++)
    {
      cin >> arr[i];
      if(arr[0] != 5)
      {
        slag=0;
      }
      else
      {
        if(arr[i] == 5)
        {
          nooffive++;
        }
        else if(arr[i] == 10)
        {
          nooften++;
          if(nooffive > 0)
          {
            nooffive--;
          }
          else
          {
            slag=0;
    
          }
        }
        else if(arr[i] == 15)
        {
          if(nooften> 0)
          {
            nooften--;
          }
          else if(nooffive>=2)
          {
            nooffive-=2;
          }
          else
          {
            slag=0;
          }
        }
      }
    }
    if(slag==1)
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" <<endl;
  }
}