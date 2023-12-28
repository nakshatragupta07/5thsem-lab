#include<stdio.h>
int main()
{
   FILE *f1,*f2;
   char ch;
   f1=fopen("sid.txt","r");
   f2=fopen("kid.txt","w");
   if(f1==NULL)
    printf("Error in Opening in File\n");
    ch=fgetc(f1);
    while (ch!=EOF){
        
        fputc(ch,f2);
        ch=fgetc(f1);

    }

return 0;
}