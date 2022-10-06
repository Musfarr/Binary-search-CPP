#include<iostream>
using namespace std;



//Binary search only works in ascending order


int binarysearch(int left, int right , int a[] , int num){

// int left, right are the indexes 0,9 in a 10 size array

//int *p = int a[];

while (left<=right){

    int mid = (left+right)/2;
    if (a[mid]== num){

        cout<<"num found at index:"<<mid+1<<endl;
        return mid;
    }
    
    else if (a[mid] < num){
        left = mid +1;}
    
    else if(a[mid]>num)
    {
        right = mid - 1;        
    }
    
}
return -1;

}





int main(){

int size = 5;
int arr[size];
int out;
int x;

//input array 
cout<<"enter 5 numbers in ascending order"<<endl;
for (int i = 0; i < size; i++)
{
    int n;
    cin>>n;
    arr[i] = n;
}
//

//print array
cout<<"The Array is :";
for (int i = 0; i < size; i++)
{   cout<<arr[i];
}
cout<<endl;
//

cout<<"enter the number you want to search"<<endl;
cin>>x;

out = binarysearch(0,4,arr,x);

if (out ==-1)
{
    cout<<"no number found";
}

    return 0;
}