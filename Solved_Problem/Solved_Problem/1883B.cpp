#include<bits/stdc++.h>
using namespace std;
int main (){
    int testCase;
    cin>>testCase;
    for (int i=0;i<testCase;i++){
        int length,possibleDelete;
        string s;
        cin>>length>>possibleDelete>>s;
        vector<int>vector(26,0);
        for (int j=0;j<length;j++){
            vector[s[j]-'a']++;// freq count.
        }
        int count=0;
        for (int j=0;j<26;j++){
           if (vector[j]%2!=0) count++;
        }
        if (possibleDelete>=length){
            cout<<"NO"<<endl;
            continue;
        }
        else if (possibleDelete>=count-1){ // count-1 because 1 ta odd thakle amra palindrome form korte pari.
            cout<<"YES"<<endl;
            continue;
        }
        else {
            cout<<"NO"<<endl;
        }

        
        

    }
}
/*even thakle kono somossa hoy na but somosssa hoy odd r shomoy 
amr kaj holo odd thakle odd gula jdi ami remove korte pari
tahole amr mission seccess..*/