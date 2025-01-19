#include <stdio.h>
#include <stdlib.h>

#include "../headers/checkCandidateSkills.h"
//#include "checkCandidateSkills.c"

int main(){
	
	int score = 0;
	int age = 0;
	int anneesExp = 0;
	
	printf("quel est l'age du candidat : ");
	scanf("%d", &age);
	
	printf("quel le nombre d'annees d'experience : ");
	scanf("%d", &anneesExp);
	
	score = scoreAge(age) + scoreAnneesExperience(anneesExp);
	
	printf("\nle score du candidat est : %d\n", score);
	
	return 0;
}