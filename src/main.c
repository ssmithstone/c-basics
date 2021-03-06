#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "../include/mylib.h"


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int * v = NULL;
	for(int i  = 0 ; i < numsSize ; i++ ){
		for(int j = i+1; j < numsSize; j++){
			if(nums[j] == target - nums[i]){
				int indexes[] = { i, j};
				int * v = malloc(2 * sizeof(int));
				memcpy(v,indexes, sizeof(int)*2);
				(*returnSize) = 2;
				return v;
			}
		}
	}
	return v;
}

void runTwoSum(){

	int values[] = {2,7,11,15};
	int count = 4;
	int target = 9;
	int returnedSize = 0;
	int * returned =twoSum(values, count ,target  ,  &returnedSize);
	if(returned != NULL){

		for(int i = 0 ; i < returnedSize ; i++ ){
			printf("%d " , returned[i] );
		}
		printf("\n");

		free(returned);
	}
	else{
		printf("No target found\n");
	}
}


int addition(int a , int b){
	return a + b;
}

int subtraction(int a , int b ){
	return a - b;
}

int multiply(int a , int b ){
	return a * b;
}

int divide(int a , int b ){
	return a / b;
}

void loop_chars(char * p){
  while((*p) != '\0'){
    printf("%c\n" , *p);
    p++;
  }
}

void loop_chars_ptr( char * *ptr){
  while((*ptr) != NULL){
    printf("%s\n" , *ptr);
    ptr++;
  }
  printf("\n");
}

int main(){

  printf("%s\n", "Learning Programming Lanaguges");
  printf("%s\n", "c-basics");


  char * buffer = NULL;
  size_t len  = 0;
  ssize_t read;
  while((read = getline(&buffer , &len , stdin)) != -1){
    fprintf(stdout, "Retrieved line of length %zu\n" , read);
    fprintf(stdout, "readline = %s" , buffer);
  }
  free(buffer);


  return 0;
}
