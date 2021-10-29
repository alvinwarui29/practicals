// array insertion using scanf
#include <stdio.h>
int main(){
	int i;
	int arr[5];
	printf("Enter five items into the array : \n");
	for(i=0;i<5;i++){
		printf("element and index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("displaying items in the array : \n");

	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	// traversing the items in the array
	printf("Displaying  items in the traverse form : \n");
	for (i=4;i>=0;i--){


		printf("%d\n",arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	//updating item at position 4

	arr[3]=789;
	printf("displaying items in the updated array : \n");

	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);}

	printf("\n");
	printf("\n");
	printf("\n");

	//search for int 34

	int search = 34;

	for(i=0;i<5;i++){
		if(search == arr[i]){
			printf("item %d is at the index %d",search,i);

		}


	}

	printf("\n");
	printf("\n");
	printf("\n");

	// deletion of item at position 3

	int n=5;
	int k=3;
	for (i=k-1;i<n;i++){
		arr[i]=arr[i+1];
	}

	printf("items in the array after deletion : \n");
	for (i=0;i<n-1;i++){
		printf("%d\n",arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	printf("code complete");




}
