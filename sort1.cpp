#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[],int n){
    int i,j,min_inx;
    for(i=0;i<n-1;i++){
        min_inx=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_inx])
                min_inx=j;
            
        
       swap(&arr[min_inx],&arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main(){
  int arr[]={5,2,9,1,7};
 int  n=sizeof(arr)/sizeof(arr[0]);
 selectionSort(arr,n);

cout<<"array is sorted"<<endl;
printArray(arr,n);
return 0;

}