#include<iostream>
#include<fstream>
using namespace std;
int main (){
    int x;
    cin>>x;
    ofstream myFile ("istiack.txt");
    while (x--)
    {
        string x;
        int id;
        cin>>x>>id;
        myFile<<x<<" "<<id<<endl;
    }
    myFile.close();

    ifstream myfile ("istiack.txt");
    string read;
    while (getline(myfile,read)){
        cout<<read;
    }
    myfile.close();
    

}