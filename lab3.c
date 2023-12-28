#include<stdio.h>
int opCheck(char ch){
  char operators[10]={
    '+','-','/','*','&','|','!','<','>','?'
  };
  int k=0;
  for(int i=0;i<10;i++){
    if(operators[i]==ch)
     {
        k=1;
        break;
     }
  }
  return k;
}
int main()
{
  FILE *f1;
  int count=0;
  f1=fopen("sid.txt","r");
  char ch;
  while(fscanf(f1,"%c",&ch)!=EOF){
    if(opCheck(ch)){
        count++;
        printf("Operator %d is :- %c \n",count,ch);
    }
  }
  printf("Total number of Operator is :- %d\n",count);
return 0;
}