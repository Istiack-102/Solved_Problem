#include<bits/stdc++.h>
using namespace std;
void x (string &s,string replace,string replaceWith){
    int position=-1;
    char ch= replace[0];
    for (int i=0;i<s.size();i++){
        if (ch==s[i]){
           string x = s.substr(i,replace.size());
           if (x==replace){
            position=i;
            break;
           }
        }
     }
    if (position==-1){
        cout<<"Invald";
        return;
    } 
    int k=0;
    for (int i=position;i<replace.size()+position;i++){
        if (k<replaceWith.size()){
            s[i]=replaceWith[k];
            k++;
        }
        else s[i]='\0';
    }
  
    cout<<s;
}
int main (){
    cout<<"Enter the main string: ";
    string s;
    cin>>s;
    cout<<"Enter which trem you want to replace: ";
    string replace;
    cin>>replace;
    cout<<"By whcih term you want to replace: ";
    string replaceWith;
    cin>>replaceWith;
    x (s,replace,replaceWith);
    

                                                         
}