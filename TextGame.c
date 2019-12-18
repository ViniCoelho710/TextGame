#include <stdio.h>
#include <stdlib.h>
#define SIZE 256
typedef struct user{
	char name[SIZE];

}USER;
void game();
void main(){
	game();


}
void game(){
	USER var;
	char buffer[SIZE];
	printf("Hey, you're finally awake. What do you call yourself?\n");

	scanf("%[^\n]",buffer);
	

	printf("Ahh, so you're the '%s' I've heard so much about.",buffer);
}