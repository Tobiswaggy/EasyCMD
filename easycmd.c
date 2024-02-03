#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
		int menu;
		
	do{
		
	system("color 2");
	printf("\n\tWelcome to EasyCMD | v1.0 | Developed by Tobiswaggy\n");
	printf("\n");
	printf("\t-- BASIC COMMANDS --\n");
	printf("\t1. Open command prompt\n");
	printf("\t2. Check directories\n");
	printf("\t3. Tree command\n");
	printf("\t4. Check local time\n");
	printf("\t5. Show running tasks\n");
	printf("\n");
	printf("\t-- ADVANCED COMMANDS --\n");
	printf("\t6. Create user/password/group\n");
	printf("\t7. Create/remove/rename files\n");
	printf("\n");
	printf("\tChoose an option: ");
	scanf("%d", &menu);
	
		switch(menu){
			
			case 1:
				
				system("prompt.bat");
				system("cls");
				
			break;
			
			case 2:
			
				system("directory.bat");
				
			break;
			
			case 3:
			
				system("tree.bat");
				
			break;
			
			case 4:
			
				system("localtime.bat");
				
			break;
			
			case 5:
			
				system("tasks.bat");
			
			break;			
			
		}
	
	}while(menu != 6);
	
		system("PAUSE");
}