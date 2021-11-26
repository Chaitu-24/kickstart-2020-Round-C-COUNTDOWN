#include<iostream>
using namespace std;
int func(int *p,int n)
{
    int fl=1,k=0;
    for(int i=n;i>=1;i--)
    {
        if(p[k++]!=i)
        {
            fl=0;
            break;
        }
    }
    //cout<<fl;
    return fl;
}
int main()
{   
    int t;
    cin>>t;
    for(int m=0;m<t;m++)
 {
    int n,x,count=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int j=0;j<n;j++)
    {
        if(arr[j]==x)
        {
            count+=func(&arr[j],x);
        }
    }
    cout<<"Case #"<<m+1<<": "<<count<<endl;
 }
    return 0;
}
