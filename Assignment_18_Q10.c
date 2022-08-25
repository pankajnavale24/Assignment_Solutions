/*10. Write a function to find the repeated character in a given string.*/
#include<stdio.h>
int ifexists(char p, char q[],  int v)
{
	int i;
	for (i=0; i<v;i++)
		if (q[i]==p) return (1);
	return (0);
}
int main()
{
	char string1[80],string2[80];
	int n,i,x;
	printf("Input a string: ");
	scanf("%s",string1);
	n=strlen(string1);
	string2[0]=string1[0];
	x=1;
	for(i=1;i < n;  i++)
	{
		if(ifexists(string1[i], string2, x))
		{
			printf("The first repetitive character in %s is: %c ", string1, string1[i]);
			break;
		}
		else
		{
			string2[x]=string1[i];
			x++;
		}
	}
	if(i==n)
		printf("There is no repetitve character in the string %s.", string1);
}
