//Gerardo Rojas
#include<string>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{ 
  vector < vector<int> > Mtable;
  Mtable.resize(12);
  for(int i=0; i<Mtable.size(); i++)
  {
  Mtable[i].resize(12);
    for(int j=0; j<Mtable[0].size(); j++)
    {
      int x= i+1;
      int y= j+1;
      int total= (x*y);
      Mtable[i][j]=total;
/*      for(int x=1; x<=12; x++)
      {
        for(int y=1; y<=12; y++)
        {
          int total = (x*y);
          Mtable[i][j]=total;
        }
      }*/
    }
  }
        for(int i=0; i< Mtable.size(); i++)
        {
          for(int j=0; j< Mtable[i].size(); j++)
          {
            cout << " " << Mtable[i][j] << " |";
          }
          cout << endl;
        }








  return 0;
}
