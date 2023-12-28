#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    char ch;
    int del;
    char *ptr,*ptr1;
    printf("enter the number of symbols  : ");
    scanf("%d",&n);
    ptr = (char*)malloc(n*sizeof(char));
   if(ptr==NULL){
    printf("\nsorry! unable to allocate memory\n");
   }
  
    printf("\n enter the symmbols  : \n ");
    for(int i=0;i<n;i++){
        printf("Enter for ptr[%d] :- ",i);
     scanf(" %c",&ch);
     printf("\n");
     ptr[i]=ch;
    }

   printf("\n displaying the symbols  : ");
   for(int i=0;i<n;i++){
    printf("%c ",(ptr[i]));
   }


   printf("\n enter the index to delete  : ");
   scanf("%d",&del);

if(del==0 && del<n){
    printf("\n deleting %c from array \n",del);
    ptr[del]='E';
}
ptr1 = (char*)malloc(n-1*sizeof(char));
   if(ptr1==NULL){
    printf("\nsorry! unable to allocate memory\n");
   }
int i=0;
for(int j=0;j<n;j++){
if(del!=j){
    ptr1[i]=ptr[j];
    i++;
}
}
  for(int i=0;i<n-1;i++){
    printf("%c ",ptr1[i]);
   }
   free(ptr1);
}