//To check given String is KeyWord or not
#include<string.h>
#include<stdio.h>
int main()
{
  char keyWord[30][10]={
    "if","else","goto","for","while","int","float","double","main","return"
  };
  char str[30];
  int k=0;
  printf("Enter Word to check KyeWord :- ");
  scanf("%s",str);
  for (int i = 0; i < 10; i++)
  {
    if(strcmp(str,keyWord[i])==0)
     {
        k=1;
        break;
     }
  }

  k?printf("%s is KeyWord\n",str):printf("%s is not a KeyWord\n",str);
  
return 0;
}