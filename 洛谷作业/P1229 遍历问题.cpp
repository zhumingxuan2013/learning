#include <iostream>
int main() {
    std::string a,b;
    std::cin>>a>>b;
    int ans=0;
    for (int i=0; i<a.size(); i++) for (int j=1; j<b.size(); j++) if (a[i]==b[j]&&a[i+1]==b[j-1]) ans++;
    std::cout<<(1<<ans);
}