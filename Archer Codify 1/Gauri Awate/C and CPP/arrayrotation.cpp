#include<iostrean>
using namespace std;
void rotateLeft(int arr[],int n,int d){
d=d%n;
int temp[d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
for(int j=n-d;j<n;j++){
    arr[j-d]=arr[j];
}
for(int k=n-d;k<n;k++){
    arr[i]=temp[i-(n-d)];
}
}
int main(){
    int n;
    cout<<"\nEnter the value of n:";
        cin>>n;
    int d;
    cout<<"\nEnter the value of d:";
    cin>>d;
    int arr[n];
    cout<<"\nEnter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateLeft(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
