#include<stdio.h>
#include <conio.h>

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

    for(i=0;i<n;i++){
        if(list[i]==key)
        {
            printf("The element %d found at position %d\n",key,i+1);
        }
    }
    return 0;
}
