//name-Parushee baluja
//roll no.-2010990523
//set-4
//q2- to check if only consecutive integers form the array

#include<bits/stdc++.h>
using namespace std;

bool checkCons(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  if(checkCons(arr,n)==true){
    cout<<"the array contains consecutive integers";
  }
  else
    cout<<"the array does not contain any consequtive integers";

    return 0;
}