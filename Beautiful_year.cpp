#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int year;
  cin>>year;
  string str=to_string(++year);

  while(set<int>(begin(str),end(str)).size()!=4)
  {
      str=to_string(++year);

  }
  cout<<str;
return 0;
}
