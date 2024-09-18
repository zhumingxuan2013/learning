#include <iostream>
#include <string>
using namespace std;
int s,t,w;
string jam;
int main()
{
    cin>>s>>t>>w>>jam;
    for (int i=0;i<5;i++)
      for (int j=w-1;j>=0;j--)
        if (j-w+t>jam[j]-'a'){
            jam[j]++;
            for (int k=j+1;k<w;k++) jam[k]=jam[k-1]+1;
            cout<<jam<<endl;
            break;
        }
    return 0;
}