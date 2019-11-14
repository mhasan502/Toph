#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string st;
        int c=0;
        cin >> st;
        for(int i=0; i< st.size(); i++){
            if(!(st[i]=='W' || st[i]=='N' || st[i]=='D'))
                c++;
        }
        if(c<6){
            cout<<c<<" BALLS"<<endl;
        }
        else{
            if(c%6){
                if(c/6==1){
                    if(c-((c/6)*6)==1)
                        cout<<c/6<<" OVER "<<c-((c/6)*6)<<" BALL"<<endl;
                    else
                        cout<<c/6<<" OVER "<<c-((c/6)*6)<<" BALLS"<<endl;
                }
                else{
                    if(c-((c/6)*6)==1)
                        cout<<c/6<<" OVERS "<<c-((c/6)*6)<<" BALL"<<endl;
                    else
                        cout<<c/6<<" OVERS "<<c-((c/6)*6)<<" BALLS"<<endl;
                }
            }
            else if(c/6==1){
                cout<<c/6<<" OVER"<<endl;
            }
            else{
                cout<<c/6<<" OVERS"<<endl;
            }
        }
    }
    return 0;
}
