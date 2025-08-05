#include<stdio.h>
int main(){
	int i,n;
	int at[10],bt[10],ft[10],tat[10],wt[10],pid[10];
	float totaltat,totalwt;
	printf("enter num of processes :\n");
	scanf("%d",&n);
	printf("\n enter the at & bt of the process\n");
	for(i=0;i<n;i++)
	{
		printf("process id[%d]\n",i+1);
		printf("AT");
		scanf("%d",&at[i]);
		printf("BT");
		scanf("%d",&bt[i]);
	}
	ft[0]=at[0]+bt[0];
	tat[0]=ft[0]-at[0];
	wt[0]=tat[0]-bt[0];
	for(i=1;i<n;i++)
	{
		if(at[i] > ft[i-1]){
			ft[i]=at[i]+bt[i];
		}
		else
		{
			ft[i]=ft[i-1]+bt[i];
		}
	tat[i]=ft[i]-at[i];
	wt[i]=tat[i]-bt[i];
	}
	for(i=0;i<n;i++)
	{
	totaltat+=tat[i];
	totalwt+=wt[i];
        }  
	printf("\nprocess\tat\tbt\tft\ttat\twt\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],ft[i],tat[i],wt[i]);
	} 
	printf("\n avg_tat = %.2f",totaltat/n);
	printf("\n avg_wt = %.2f",totalwt/n);
	
	}

