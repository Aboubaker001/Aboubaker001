#include<stdio.h>
int main(){int x;
	do{
		printf("Give me the number of your day from 1 to 7\n The day:");
	    scanf("%d",&x);	
	}while(x<1||x>7);
	switch(x){
		case 1: printf("Saturday\n");break;
			case 2: printf("Sunday\n");break;
				case 3: printf("Monday\n");break;
					case 4: printf("Teusday\n");break;
						case 5: printf("Wednesday\n");break;
							case 6: printf("Thursday\n");break;
								case 7: printf("Friday\n");break;
								default: printf("Wrong number");
	}
	return 0;
}
