#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b ){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void printArr(int *arr,int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
int partition(int *arr,int s,int e){
 int pivot=s;
 int count=0;
 int i;
 int j;
 int pivotIndex;
   for(i=s;i<=e;i++){
    if(arr[pivot]>arr[i]){
   count++;
   }
   }
     pivotIndex=pivot+count;
     swap(arr+pivotIndex,arr+pivot);
    i=s;
    j=e;
 while(i<j && i< pivotIndex && j>pivotIndex){

   while(arr[i]<arr[pivotIndex] && i< pivotIndex)
    i++;
    while(arr[j]>arr[pivotIndex] && j> pivotIndex)
    j--;

    swap(arr+i,arr+j);
 }
 return pivotIndex;
}
void quickSort(int *arr,int s,int e){
int p;
  if(s>=e)
   return ;
   p=partition(arr,s,e);
   quickSort(arr,s,p);
   quickSort(arr,p+1,e);
}
int main(){

  int arr[5]={2,3,1,4,0};
  clrscr();
  printArr(arr,5);
  quickSort(arr,0,4);
   printArr(arr,5);

   getch();
return 0;
}