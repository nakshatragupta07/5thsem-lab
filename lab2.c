#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int keyChecker(char key[]){
    char keyWords[30][10]={
        "if","else","goto","for","while","int","float","double","main","return"
    };
    int k=0;
    for(int i=0;i<10;i++){
        if(strcmp(key,keyWords[i])==0){
         k=1;
          break;
        }
    }

    return k;

}

int main()
{
    FILE *f1=fopen("sid.txt","r");
    int count=0;
    if(f1==NULL){
        printf(" Error !!! File can not Open\n");
        exit(0);
    }
    char ch[30];
    while(fscanf(f1,"%s",ch)!=EOF){
        if(keyChecker(ch)){
         count++;
         printf("KeyWord %d :- %s\n",count,ch);
        }
    }

    fclose(f1);
 
printf("Total Number of KeyWords :- %d\n",count);

return 0;
}