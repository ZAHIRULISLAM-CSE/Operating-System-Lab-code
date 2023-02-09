#include<unistd.h>
#include<bits/stdc++.h>
#include<iostream>>

using namespace std;

int main(){
    int total_process,value,wsum=0;
    vector<int> brust_array;
    std::vector<int>copy_brust;
    vector<int> waiting_array;
    vector<int>v2;
    cout<<"Enter the total number of process: ";
    cin>>total_process;
    for(int i=1;i<=total_process;i++){
        cout<<"Enter the brust time of process "<<i <<"\n";
        cin>>value;
        brust_array.push_back(value);
    }

     for( int i=0;i<brust_array.size();i++){
        copy_brust.push_back(brust_array[i]);
    }

    sort(brust_array.begin(),brust_array.end() );
    //waiting time
    waiting_array.push_back(0);
    for( int i=0;i<brust_array.size();i++){
        wsum=wsum+brust_array[i];
        waiting_array.push_back(wsum);
    }
     for(int i=0;i<waiting_array.size()-1;i++){
        cout<<"value :"<<waiting_array[i];
    }

}
