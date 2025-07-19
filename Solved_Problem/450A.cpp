#include<iostream>
#include<vector>
using namespace std;
int main (){
    int line_size,chocolate_number;
    cin>>line_size>>chocolate_number;
    vector<int> children;
   for (int i=0;i<line_size;i++){
        int element;
        cin>>element;
        if (element%chocolate_number!=0){
            children.push_back((element/chocolate_number)+1);
        }
        else children.push_back((element/chocolate_number));
    }
    int max = INT_MIN;
    int position=-1;
    for (int i=0;i<line_size;i++){
        if(children[i]>=max){
           max=children[i];
            position=i;
            
        }
    }
   
     cout<<position+1<<endl;
   
}
/*joto bar vag jabe + joto reminder thakbe toto bar she line a darabe tai jar oi amount ta beshi hobe + shobar last a thakbe 
she shobar last a jbe.*/
