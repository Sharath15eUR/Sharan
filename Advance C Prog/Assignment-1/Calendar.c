#include<stdio.h>
#include<string.h>

struct calender{
	char dayName[9];
	char tasks[3][100];
	int taskCount;
};

int main(){
	struct calender days[7]={
		{"Sunday",{},0},
		{"Monday",{},0},
		{"Tuesday",{},0},
		{"Wednesday",{},0},
		{"Thursday",{},0},
		{"Friday",{},0},
		{"Saturday",{},0}
	};
	int choice =0;
	do{
		printf("Calender: \n");
		printf("---------\n");
		printf("1. Add a task\n");
		printf("2. Display All Tasks\n");
		printf("3. Exit\n");
		printf("Enter Choice: ");
		scanf("%d",&choice);
		getchar();
		int d;
		char task[100];
		switch(choice){
			
			case 1:
				printf("Enter the day to add a task: (1-Sunday.. 7-Saturday): ");
				scanf("%d",&d);
				getchar();
				if(d<1 || d>7){
					printf("Invalid Day.\n");
					break;
				}
				if(days[d-1].taskCount==3) printf("Limit of 3 tasks per day reached\n");
				else{
					printf("Enter task to add: ");
					fgets(task, sizeof(task), stdin);
					task[strcspn(task, "\n")] = 0;
					strcpy(days[d-1].tasks[days[d-1].taskCount], task);
					days[d-1].taskCount++;
					printf("Task Added Successfully.\n");
				}
				break;
			case 2:
				for(int i=0;i<7;i++){
					printf("%s =>\t",days[i].dayName);
					if(days[i].taskCount==0) printf("No Tasks. \n");
					else{
						printf("\n");
						for(int j=0;j<days[i].taskCount;j++){
							printf("Task %d: %s\n",j+1,days[i].tasks[j]);
						}
					}
				}
				break;
			case 3:
				printf("Exiting...\n");
				
				break;
		}
		
		
		printf("---------------\n");
	}
	while(choice!=3);	
	return 0;
}


