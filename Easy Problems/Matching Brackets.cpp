#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string str;
    cin >> str;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        try{
            if(st.empty()){
                cout << "No" << endl;
                return 0;
            }
            if(str[i]==')' && st.top()=='(')
                st.pop();
            else if(str[i]=='}' && st.top()=='{')
                st.pop();
            else if(str[i]==']' && st.top()=='[')
                st.pop();
        }
        catch(exception e){
            cout << "No" << endl;
            return 0;
        }
    }
    if(st.empty()){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}
