#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin>>n;
    int temp;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
             temp=arr[i];
            int j;
        for( j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
