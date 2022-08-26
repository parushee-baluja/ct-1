//name-parushee baluja
//roll no.-2010990523
//set no.-4

//q1-given an integer array,find min index of a repeating element in linear time and doing single transversal of array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min=-1;
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    set<int> a;
    
    for(int i=n-1;i>=0;i--){
        if(a.find(arr[i])!=a.end()){
            min=i;
        }
        else{
            a.insert(arr[i]);
        }
    }
  if(min!=-1)
    cout<< "The minimum index of repeating element is "<<min;
  else
    cout<<"Invalid Input";
    
    return 0;
}
