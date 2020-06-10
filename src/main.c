#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int * v = malloc(sizeof(int));
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


int main(){

	printf("%s\n" , "Learning Programming Lanaguges");
	printf("%s\n" , "c-basics");

	int values[] = {2,7,11,15};
	int count = 4;
	int target = 9;
	int returnedSize = 0;
	int * returned =twoSum(values, count ,target  ,  &returnedSize);
	for(int i = 0 ; i < returnedSize ; i++ ){
		printf("%d " , returned[i] );
	}
	printf("\n");

	free(returned);
	return 0;
}
