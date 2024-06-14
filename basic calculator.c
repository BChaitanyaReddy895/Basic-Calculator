# include<stdio.h>
void addition(int num_elements)
{
	printf("Enter the %d elements for addition:\n",num_elements);
	int arr[num_elements];
	int i;
	for(i=0;i<num_elements;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int result=0;
	for(i=0;i<num_elements;i++)
	{
		result+=arr[i];

	}
	printf("\nThe result is %d\n",result);
	
}
void subtraction(int num_elements)
{
	printf("Enter the %d elements for addition:\n",num_elements);
	int arr[num_elements];
	int i;
	for(i=0;i<num_elements;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int result=0;
	for(i=num_elements;i>0;i--)
	{
		result=arr[i]-result;

	}
	printf("\nThe result is %d\n",result);
	
}
void multiplication(int num_elements)
{
	printf("Enter the %d elements for multiplication:\n",num_elements);
	int arr[num_elements];
	int i;
	for(i=0;i<num_elements;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int result=1;
	for(i=0;i<num_elements;i++)
	{
		result*=arr[i];

	}
	printf("\nThe result is %d\n",result);
}
int division(int num_elements)
{
	if (num_elements <= 1) 
	{
		printf("Number of elements must be greater than one for division.\n");
        return 1;
    }
	printf("Enter the %d elements for division:\n",num_elements);
	float arr[num_elements];
	int i;
	for(i=0;i<num_elements;i++)
	{
		scanf("%f",&arr[i]);
		
	}
	float result=arr[0];
	for(i=1;i<num_elements;i++)
	{
		if(arr[i]==0)
		{
			printf("division by zero is not possible");
			break;
		}
		result/=arr[i];
	}
	
	printf("\nThe result is %f\n",result);
}
int main()
{
	int num_elements;
	char operation;
	printf("choose the required operation out of four operations(+,-,*,/):");
	scanf("%c",&operation);
	switch(operation)
	{
		case '+':
			printf("Enter the number of elements for addition:");
			scanf("%d",&num_elements);
			addition(num_elements);
			break;
		case '-':
			printf("Enter the number of elements for subtraction:");
			scanf("%d",&num_elements);
			subtraction(num_elements);
			break;
		case '*':
			printf("Enter the number of elements for multiplication:");
			scanf("%d",&num_elements);
			multiplication(num_elements);
			break;
		case '/':
			printf("Enter the number of elements for division:");
			scanf("%d",&num_elements);
			division(num_elements);
			break;
		default:
			printf("\nInvalid operation\n");
			break;
				
	}
	return 0;
}
