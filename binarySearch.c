#include<stdio.h>
#include<conio.h>

int main(){
	int n,i,key;
	
	system("cls");
    printf("Enter total no. of integers present in list:");
    scanf("%d",&n);
    int list[n];
    printf("Enter the list of integers:");
    for(i=0;i<n;i++){
            scanf("%d",&list[i]);
    }

    printf("Enter the element to be searched:");
    scanf("%d",&key);
    printf("Element is being searched...\n");
    
    int mid=n/2;
    int left =0, right=n;
    
    while(left<=right){
    	if(list[mid]==key){
    		printf("The element %d found at position %d\n",key,mid+1);
    		break;
    	}
		else if(key>list[mid])
			left=mid+1;
		else
			right=mid-1;
		mid=(left+right)/2;
	}
	if(left>=right){
		printf("Element not found");
	}
return 0;
}
