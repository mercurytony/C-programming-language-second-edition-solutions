#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Exercise 1-3 */
void exercise_three() {
	float fahr, celsius;
	int lower, upper, step;
	char* fah = "fahr";
	char* cel = "celsius";

	lower = 0;	/* lower limit of temperature table*/
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	fahr = lower;
	printf("%s %s\n",fah, cel);
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}

/* Exercise 1-4 */
void exercise_four() {
	float fahr, celsius;
	int lower, upper, step;
	char* fah = "fahr";
	char* cel = "celsius";

	lower = 0;	/* lower limit of temperature table*/
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	celsius = upper;
	printf("%s %s\n",fah, cel);
	while (celsius >= lower) {
		fahr = (9.0/5.0) * (celsius) + 32;
		printf("%3.0f %6.1f\n", fahr, celsius);
		celsius = celsius - step;
	}


}

/* Exercise 1-5 */
void exercise_five() {
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/* Exercise 1-6 */
void exercise_six() {
	int c;
	printf("%d\n", (c != EOF)); //this will be value 1
	
}

/* Exercise 1-7 */
void exercise_seven() {
	printf("EOF: %d\n", EOF);
}

/* Exercise 1-8 */
void exercise_eight() {
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			++nl;	
		}
	}
	printf("%d\n", nl);
}

/* Exercise 1-9 */
void exercise_nine() {
	int c;
	int blankdetect = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && !blankdetect) {
			putchar(c);
			blankdetect = 1;
		} else if (blankdetect) {
			if (c != ' ') {
				blankdetect = 0;
				putchar(c);
			}
		} else {
			putchar(c);
		}
	}
}

/* Exerciese 1-10 */
void exercise_ten() {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
		} else {
			putchar(c);
		}
	}
}

/* Exercise 1-12 */
void exercise_twe() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
		} else {
			putchar(c);
		}
	}
}

/* Exercise 1-13 */
void exercise_thirteen() {
	int c;	

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n') {
			putchar('\n');
		} else {
			putchar('*');
		}
	
	}
}

/* Exercise 1-14 */
void exercise_fourteen() {
	int c;
	int count[128];
	
	for (int i = 0; i < 128; i++) {
		count[i] = 0;
	}

	while ((c = getchar()) != ' ') {
		count[(int)(c)] += 1;
	}
	
	for (int i = 65; i < 127; i++) {
		printf("%c: %d\n", (char) (i), count[i]);
	}
}

/* Exercise 1-17 */

void exercise_seventeen() {
	int c;
	int count = 0;
	char word[200]; //max will be 200 characters

	while ((c = getchar()) != EOF) {
		word[count] = c;
		count ++;
	}
	word[count] = '\0';
	if (count > 80) {
		printf("%s\n", word);
	}
}

/* Exercise 1-18 */

void exercise_eighteen() {
	int c;
	char word[200];
	int i = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			;
		} else {
			word[i] = c;
			i ++;
		}
	}
	word[i] = '\0';
	printf("result: %s\n", word);
}

/* Exercise 1-19 */
void reverse(char s[]) {
	int size;
	char temp;

	for (size = 0; s[size] != '\0'; size++);
	for (int i = 0; i < size - 1; i++) {
		temp = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = temp;
	}

}

int main() {
	/* test solution here */
}
