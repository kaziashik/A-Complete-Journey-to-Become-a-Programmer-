
//  Header  file  for  Cpu  scheduling
#include<iostream>
//#include<conio.h>
#include<stdio.h>

using  namespace  std;
class  cpuschedule
{
    int  n,Bu[20];
    float  Twt,Awt,A[10],Wt[10],w;
public:
//Getting  the  No  of  processes  &  burst  time
    void  Getdata();
//First  come  First  served  Algorithm
    void  Fcfs();
//Shortest  job  First  Algorithm
    void  Sjf();
//Round  Robin  Algorithm
    void  RoundRobin();
};

//Getting no of processes and Burst time
void cpuschedule::Getdata()
{
    int i;
    cout<<"Enter the no of processes:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter The BurstTime for Process p"<<i<<"= ";
        cin>>Bu[i];
    }
}

//First come First served Algorithm
void cpuschedule::Fcfs()
{
    int i,B[10];
    Twt=0.0;
    for(i=1; i<=n; i++)
    {
        B[i]=Bu[i];
        cout<<endl<<"Burst time for process p"<<i<<"= ";
        cout<<B[i]<<endl;
    }
    Wt[1]=0;
    for(i=2; i<=n; i++)
    {
        Wt[i]=B[i-1]+Wt[i-1];
    }
//Calculating Average Weighting Time
    for(i=1; i<=n; i++)
        Twt=Twt+Wt[i];
    Awt=Twt/n;
    cout<<endl<<"Total Weighting Time="<<Twt<<endl;
    cout<<endl<<"Average Weighting Time="<<Awt<<endl;
}

//Shortest job First Algorithm
void cpuschedule::Sjf()
{
    int i,j,temp,B[10];
    Twt=0.0;
    for(i=1; i<=n; i++)
    {
        B[i]=Bu[i];
        cout<<endl<<"Burst time for process p"<<i<<"= ";
        cout<<B[i];
    }
    for(i=n; i>=1; i--)
    {
        for(j=2; j<=n; j++)
        {
            if(B[j-1]>B[j])
            {
                temp=B[j-1];
                B[j-1]=B[j];
                B[j]=temp;
            }
        }
    }
    Wt[1]=0;
    for(i=2; i<=n; i++)
    {
        Wt[i]=B[i-1]+Wt[i-1];
    }
//calculating Average Weighting Time
    for(i=1; i<=n; i++)
        Twt=Twt+Wt[i];
    Awt=Twt/n;
    cout<<endl<<"Total Weighting Time="<<Twt;
    cout<<endl<<"Average Weighting Time="<<Awt<<"";
}

//Round Robin Algorithm
void cpuschedule::RoundRobin()
{
    int i,j,tq,k,B[10],Rrobin[10][10],count[10];
    int max=0;
    int m;
    Twt=0.0;
    for(i=1; i<=n; i++)
    {
        B[i]=Bu[i];
        cout<<"Burst time for process p"<<i<<"= ";
        cout<<B[i]<<endl;
        if(max<B[i])
            max=B[i];
        Wt[i]=0;
    }
    cout<<"Enter the Time Quantum=";
    cin>>tq;
//TO find the dimension of the Rrobin array
    m=max/tq+1;
//initializing Rrobin array
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            Rrobin[i][j]=0;
        }
    }
//placing value in the Rrobin array
    i=1;
    while(i<=n)
    {
        j=1;
        while(B[i]>0)
        {
            if(B[i]>=tq)
            {
                B[i]=B[i]-tq;
                Rrobin[i][j]=tq;
                j++;
            }
            else
            {
                Rrobin[i][j]=B[i];
                B[i]=0;
                j++;
            }
        }
        count[i]=j-1;
        i++;
    }
    cout<<"\nDisplay\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<"\nRr["<<i<<","<<j<<"]="<<Rrobin[i][j];
            cout<<"\n";
        }
        cout<<"";
    }
//calculating weighting time
    int x=1;
    i=1;
    while(x<=n)
    {
        for(int a=1; a<x; a++)
        {
            Wt[x]=Wt[x]+Rrobin[a][i];
        }
        i=1;
        int z=x;
        j=count[z];
        k=1;
        while(k<=j-1)
        {
            if(i==n+1)
            {
                i=1;
                k++;
            }
            else
            {
                if(i!=z)
                {
                    Wt[z]=Wt[z]+Rrobin[i][k];
                }
                i++;
            }
        }
        x++;
    }
    for(i=1; i<=n; i++)
        cout<<endl<<"Weighting Time for process P"<<i<<"="<<Wt[i];
//calculating Average Weighting Time
    for(i=1; i<=n; i++)
        Twt=Twt+Wt[i];
    Awt=Twt/n;
    cout<<endl<<"Total Weighting Time="<<Twt;
    cout<<endl<<"Average Weighting Time="<<Awt<<"";
}

int main()
{
    int ch,cho;
    cpuschedule c;
    do
    {
        cout<<" \n\nMENU\n\n";
        cout<<"1.Getting BurstTime\n";
        cout<<"2.FirstComeFirstServed\n";
        cout<<"3.ShortestJobFirst\n";
        cout<<"4.RoundRobin\n";
        cout<<"5.EXIT\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            c.Getdata();
            break;
        case 2:
            cout<<endl<<"FIRST COME FIRST SERVED SCHEDULING\n";
            c.Fcfs();
            break;
        case 3:
            cout<<endl<<"SHORTEST JOB FIRST SCHEDULING\n";
            c.Sjf();
            break;
        case 4:
            cout<<endl<<"ROUND ROBIN SCHEDULING\n";
            c.RoundRobin();
            break;
        case 6:
            break;
        }
    }
    while(ch<5);
}
