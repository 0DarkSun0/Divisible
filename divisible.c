//Stefan Wallin
//School of Computer Science
//swalli2@mimi.cs.mcgill.ca 

#include <stdio.h>

int main(void) {
	int first, second, third, fourth, n;
	char string[50];

	//prompting user
	printf("Please input three numbers: ");

	//storing user input
	fgets(string, 30, stdin);
	n = sscanf(string, "%d %d %d %d", &first, &second, &third, &fourth);

	//checking if number of inputs is 3
	if (n != 3) {
		printf("Error: Incorrect number of inputs\n");
		printf("Usage: ./divisible <first_int> <second_int> <third_int>\n");

		return 4;
	}

	//if first number is 0: Not divisible
	if (first == 0) {
		//checking if its increasing
		if (second > first && third > second) {
			printf("Not divisible & Increasing\n");

			return 1;
		}

		else {
			printf("Not divisible & Not increasing\n");

			return 3;
		}
	}
	
	//checking if its divisible and increasing
	else if (second % first == 0 && third % first == 0 && second > first && third > second) {
		printf("Divisible & Increasing\n");
		
		return 0;
	}

	//checking if its not divisible and increasing
	else if ((second % first != 0 || third % first != 0) && second > first && third > second) {
		printf("Not divisible & Increasing\n");
		
		return 1;
	}

	//checking if it divisible and not increasing
	else if (second % first == 0 && third % first == 0 && (!(second > first) || !(third > second))) {
		printf("Divisible & Not increasing\n");
		
		return 2;
	}

	//otherwise, its not divisible and not increasing
	else {
		printf("Not divisible & Not increasing\n");
		
		return 3;
	}
}
