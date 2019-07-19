#include<stdio.h>
#include<string.h>
#include <time.h>
void login();
void login() {
  char ac[]="123abc";
  char pw[]="abc123";
  char acs[50];
  char pws[50];
  int c=0;
  int d=0;

  printf("アカウント名：123abc , パスワードabc123\n");

  printf("アカウント名を入力してください:");
  scanf("%s",acs);
  printf("アカウント名:%s\n",acs);

  while (strcmp(ac,acs)!=0 && c<=3){
    printf("正しいアカウント名を入力してください:");
    scanf("%s",acs);
    c++;

    if (c==4){
      printf("5回間違えたため終了します\n");
    }
  }
  if (strcmp(ac,acs)==0){
    printf("パスワードを入力してください:");
    scanf("%s",pws);

    while (strcmp(pw,pws)!=0 && d<=3){
      printf("正しいパスワードを入力してください:");
      scanf("%s",pws);
      d++;

       if (d==4){
         printf("5回間違えたため終了します.\n");
       }
    }
  }
  puts("ログインできました。");

}


