#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number of processes to be added :";
    cin>>n;
    int t,d,bt[n],wt[n],at[n],tat[n],avtat=0;
    
    for(int i =0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
        
    }
    
    
  
    wt[0]=0; 
    for(int i=0;i<n;i++)
    {
        wt[i]=0;
        for(int j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    
    for (int i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
        
    }
    
    
    
   
    for (int i=0;i<n;i++){
        avtat+=tat[i];
    t=avtat/n;
        
    }
    cout<<"Process no.\t\tBurst time\t\tWaiting time\t\tTAT\tAverage TAT"<<"\n";
    for(int i =0;i<n;i++){
        cout<<i<<"\t\t\t"<<bt[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<"\t\t"<<t<<"\n";    
        }
    return 0;
}
