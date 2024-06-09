#include<iostream>  
#include<algorithm>  
using namespace std; 
int n,x,a[10000],ans; 
int main(){  
    int s=0;
    cin>>x>>n;  
    for(int i=1;i<=n;i++){
        cin>>a[i]; 
    }
    sort(a+1,a+1+n); 
    if(a[1]!=1){
        cout<<-1<<endl;  
        return 0;
    }  
    s=0;
    int l;
    while(s<x){  
        for(int i=n;i>=1;i--){
            if(a[i]<=s+1){
                l=i;
                break;
            }
            
        }
        ans++;        
        s+=a[l];
    }   
    cout<<ans;
    return 0;
}