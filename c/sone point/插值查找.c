#include <stdio.h>
int search(int arr[],int key,int high,int low){
    int mid=low+((key-arr[low])/(arr[high]-arr[low]))*(high-low);
    if(arr[mid]==key){
        return mid;
    }
    if(low==high){
        return -1;
    }
    else if(arr[mid]<key){
        return search(arr,key,high,mid+1);
    }    
    else if(arr[mid]>key){
        return search(arr,key,mid-1,low);
    }
}
int main()
{
    int a[8]={5,10,12,14,18,20,26,38};
    printf("%d",search(a,20,7,0));
    return 0;
}
