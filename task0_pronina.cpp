#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int n, m, i, j;
	printf("Choose your fighter:\n");
	printf("1. king\n");
	printf("2. queen\n");
	printf("3. rook\n");
	printf("4. bishop\n");
	printf("5. knight\n");
	printf("6. pawn\n");
	printf("Your's choice: ");
	int input;
	scanf("%d", &input);
	switch (input)
	{
	    case 1:
	    {
		    printf("KING\n");
		    printf("enter the zero coordinates/char number/\n");
		    scanf("%d%d", &m, &n);
		    printf("enter the final coordinates/char number/\n");
		    scanf("%d%d", &i, &j);
		    if (((((abs(i - m) == 1) && (n == j)) ||
			    (abs(j - n) == 1) && (m == i)) ||
			    ((abs(i - m) == 1)) && (abs(n - j) == 1)))
		    {
			    printf("it's can do it\n");
		    }
		    else
		    {
			    printf("can't do it, but another shapes that can do it:\n");
			    if (((((abs(i - m) >= 1) && (n == j)) ||
				    (abs(j - n) >= 1) && (m == i)) ||
				    ((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
			    {
				    printf("queen\n");
			    }
			    if ((i == m) || (j == n)) printf("rook\n");
			    if (((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("bishop\n");
			    if (((abs(i - m)) == 1) && (n == j)) printf("pawn\n");
			    if (((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
			  	    ((abs(i - m)) == 2) && ((abs(j - n)) == 1))
			    {
				    printf("knight\n");
			    }
		    }
		    break;
	    }
	    case 2:
		{
			printf("QUEEN\n");
			printf("enter the zero coordinates/char number/\n");
			scanf("%d%d", &m, &n);
			printf("enter the final coordinates/char number/\n");
			scanf("%d%d", &i, &j);
			if (((((abs(i - m) >= 1) && (n == j)) ||
				(abs(j - n) >= 1) && (m == i)) ||
				((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
			{
				printf("it's can do it\n");
			}
			else
			{
				printf("can't do it, but another shapes that can do it:\n");
				if (((((abs(i - m) == 1) && (n == j)) ||
					(abs(j - n) == 1) && (m == i)) ||
					((abs(i - m) == 1)) && (abs(n - j) == 1)))
				{
					printf("king\n");
					if ((i == m) || (j == n)) printf("rook\n");
					if (((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("bishop\n");
					if (((abs(i - m)) == 1) && (n == j)) printf("pawn\n");
					if (((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
						((abs(i - m)) == 2) && ((abs(j - n)) == 1))
					{
						printf("knight\n");
					}
				}
				break;
			}
		}
		case 3:
		{
			printf("ROOK\n");
			printf("enter the zero coordinates/char number/\n");
			scanf("%d%d", &m, &n);
			printf("enter the final coordinates/char number/\n");
			scanf("%d%d", &i, &j);
			if ((i == m) || (j == n)) printf("it's can do it\n");
			else
			{
				printf("can't do it, but another shapes that can do it:\n");
				if (((((abs(i - m) == 1) && (n == j)) ||
					(abs(j - n) == 1) && (m == i)) ||
					((abs(i - m) == 1)) && (abs(n - j) == 1)))
				{
					printf("king\n");
				}
				if (((((abs(i - m) >= 1) && (n == j)) ||
					(abs(j - n) >= 1) && (m == i)) ||
					((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
				{
					printf("queen\n");
				}
				if (((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("bishop\n");
				if (((abs(i - m)) == 1) && (n == j)) printf("pawn\n");
				if (((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
					((abs(i - m)) == 2) && ((abs(j - n)) == 1))
				{
					printf("knight\n");
				}
			}
			break;
		}
		case 4:
		{
			printf("BISHOP\n");
			printf("enter the zero coordinates/char number/\n");
			scanf("%d%d", &m, &n);
			printf("enter the final coordinates/char number/\n");
			scanf("%d%d", &i, &j);
			if (((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("it's can do it\n");
			else
			{
				printf("can't do it, but another shapes that can do it:\n");
				if (((((abs(i - m) == 1) && (n == j)) ||
					(abs(j - n) == 1) && (m == i)) ||
					((abs(i - m) == 1)) && (abs(n - j) == 1)))
				{
					printf("king\n");
				}
				if (((((abs(i - m) >= 1) && (n == j)) ||
					(abs(j - n) >= 1) && (m == i)) ||
					((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
				{
					printf("queen\n");
				}
				if ((i == m) || (j == n)) printf("rook\n");
				if (((abs(i - m)) == 1) && (n == j)) printf("pawn\n");
				if (((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
					((abs(i - m)) == 2) && ((abs(j - n)) == 1))	printf("knight\n");
			}
			break;
		}
	    case 5:
	    {
		    printf("KNIGHT\n");
		    printf("enter the zero coordinates/char number/\n");
		    scanf("%d%d", &m, &n);
		    printf("enter the final coordinates/char number/\n");
		    scanf("%d%d", &i, &j);
		    if (((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
				((abs(i - m)) == 2) && ((abs(j - n)) == 1))
		    {
			    printf("it's can do it\n");
		    }
		    else
		    {
			    printf("can't do it, but another shapes that can do it:\n");
			    if (((((abs(i - m) == 1) && (n == j)) ||
				    (abs(j - n) == 1) && (m == i)) ||
				    ((abs(i - m) == 1)) && (abs(n - j) == 1)))
			    {
				    printf("king\n");
			    }
		    	if (((((abs(i - m) >= 1) && (n == j)) ||
				    (abs(j - n) >= 1) && (m == i)) || 
				    ((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
			    {
				    printf("queen\n");
			    }
			    if ((i == m) || (j == n)) printf("rook\n");
			    if (((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("bishop\n");
			    if (((abs(i - m)) == 1) && (n == j)) printf("pawn\n");
		    }
		    break;
	    }
	    case 6:
	    {
		    printf("PAWN\n");
		    printf("enter the zero coordinates/char number/\n");
		    scanf("%d%d", &m, &n);
		    printf("enter the final coordinates/char number/\n");
		    scanf("%d%d", &i, &j);
		    if (((abs(i - m)) == 1) && (n == j)) printf("it's can do it\n");
		    else
		    {
			    printf("can't do it, but another shapes that can do it:\n");
			    if(((((abs(i - m) == 1) && (n == j)) ||
				    (abs(j - n) == 1) && (m == i)) || 
				    ((abs(i - m) == 1)) && (abs(n - j) == 1)))
			    {
				    printf("king\n");
			    }
			    if(((((abs(i - m) >= 1) && (n == j)) ||
				    (abs(j - n) >= 1) && (m == i)) ||
				    ((abs(i - m) >= 1)) && (abs(n - j) >= 1)))
			    {
				    printf("queen\n");
			    }
			    if((i == m) || (j == n)) printf("rook\n");
			    if(((abs(i - m) >= 1)) && (abs(n - j) >= 1)) printf("bishop\n");
			    if(((abs(i - m)) == 1) && ((abs(j - n)) == 2) ||
				((abs(i - m)) == 2) && ((abs(j - n)) == 1)) printf("knight\n");
	    	}
		    break;
	    }
	}
	system("pause");
	return 0;
}