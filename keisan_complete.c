#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int global;

void mondaisuu();
void keisan();

void mondaisuu(){
	int scanf_flag;

	printf("問題数を指定:");

	while(1){
		scanf_flag=scanf("%d",&global);
		if(scanf_flag!=1 || global>1000 || global<1){
			if (scanf_flag!=1)scanf("%*s");
			printf("正しい値を入力してください。\n");
			continue;
		}
		break;
	}
}

void keisan(){
	int i,ans_count=0,com_time,a,b,i_sig,arith_ans,user_ans,x;
	int mondai=0;
	char c_sig[4]={'+','-','/','*'};
	clock_t start,end;

	srand((unsigned int)time(NULL));

	

	for(i=0; i<global; i++){
		a=rand()%99+1;
		b=rand()%a+1;
		i_sig=rand()%2;
		printf("%d%c%d=",a,c_sig[i_sig],b);

		if(i_sig==0) 
			arith_ans=a+b;
		
		if(i_sig==1) 
			arith_ans=a-b;
			
		scanf("%d",&user_ans);
		if(user_ans==arith_ans){
			ans_count++;
			mondai++;
			printf("正解しました\n");
			printf("残り%d問です\n",global-mondai);
		}else{
			mondai++;
			printf("不正解\n");
			printf("残り%d問です\n",global-mondai);
		}
	}
	printf("\n正解数:%d\n",ans_count);
}

void main(){
	extern void login();
	login();
	printf("今日も一日がんばりましょう！！\n");
	mondaisuu();
	printf("今回は%d問です\n",global);
	keisan();
}

