#include<stdio.h>
#include<conio.h>
int binarySearch(int arr[],int n,int s,int e){
int mid=(s+e)/2;
if(arr[mid]==n){
 return mid;
}
else if(arr[mid]>n){
binarySearch(arr,n,s,mid-1);

}
else{
 binarySearch(arr,n,mid+1,e);
}
return -1;
}
int main(){
   int arr[5],i,s,ans;
   printf("Enter Array Elemnts :- ");
   for(i=0;i<5;i++){
   scanf("%d",&arr[i]);
   }
   printf("Enter number to Search :- ");
   scanf("%d",&s);

    int ans= binarySearch(arr,5,0,4);



   getch();
   return 0;

}