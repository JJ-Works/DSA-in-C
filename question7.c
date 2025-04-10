// Program to implement the Tower of Hanoi problem using Recursion.

#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {


	if (n == 1) {
        printf("\n\n\t\t\t\tMove disk 1 from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);

    printf("\n\n\t\t\t\tMove disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);

}

int main() {
    int n;
    printf("\n\n\t\t\t#7 Program to implement the Tower Of Hanoi problem using Recursion.\n");
    printf("\n\n\t\tEnter the number of disks: ");
    scanf("%d", &n);
    printf("\n\t\tSteps to solve Tower of Hanoi:\n");
    hanoi(n, 'A','C','B');
	printf("\n\n\t\t\t\t\t<-Finished->\n\n");
	return 0;
}

