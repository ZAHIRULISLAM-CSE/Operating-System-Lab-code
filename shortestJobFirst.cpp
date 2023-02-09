#include<bits/stdc++.h>
using namespace std;

int main(){
    int process, wait = 0, turnaround = 0 , totalTurn = 0, totalWait = 0;
    vector< pair <int, int> > vect;
    vector<int> chart;
    freopen("input.txt", "r", stdin);
    cout<<"Enter the number of processes: "<<endl;
    cin>>process;
    int arr[process], burst[process];
    
    cout<<"Enter the burst time for respective process: "<<endl;
    for (int i = 0; i < process; i++){
        cin>>burst[i];
        arr[i] = i+1;
        vect.push_back(make_pair(burst[i],arr[i]) );
    }

    cout << "Processes and their burst time:\n" ;
    for (int i=0; i<process; i++)
        cout <<"P"<< vect[i].second <<" "<< vect[i].first <<endl;

    sort(vect.begin(), vect.end());

    cout<<"\nProcess\tWaiting\tTurnaround" <<endl;
    chart.push_back(wait);

    for (int i = 0; i < process; i++){
        totalWait += wait;
        turnaround += vect[i].first;
        cout<<"P"<< vect[i].second<<"    \t"<<wait<<"    \t"<<turnaround<< endl;
        wait += vect[i].first;
        chart.push_back(wait);
        totalTurn += turnaround;
    }

    double resWait = (double)totalWait / (double)process;
    double resTurn = (double)totalTurn / (double)process;
    cout<<"\nAverage waiting time: "<<resWait<<endl;
    cout<<"Average waiting time: "<<resTurn<<endl;

    //grant chart
     puts("\n---------Grant Chart----------\n");
     for(int i=0;i<process;i++)
        cout<<"---------|";
     cout<<"\n";
     for(int i=0;i<process;i++)
        cout<<"Process "<<vect[i].second<<" ";
     cout<<"\n";
     for(int i=0;i<process;i++)
        cout<<"---------|";
     cout<<"\n";
     for(int i=0;i<chart.size();i++)
        cout<<chart[i]<<"        ";

    return 0;
}