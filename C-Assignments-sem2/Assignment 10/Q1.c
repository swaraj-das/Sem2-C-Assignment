#include <stdio.h>
#include <string.h>

void numberToWords(int num, char* result) {
    char* ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    char* teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    char* tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    char* thousands[] = { "", "Thousand", "Million", "Billion" };

    if (num == 0) {
        strcat(result, "Zero");
        return;
    }

    int parts[4] = { 0 }; // To store billions, millions, thousands, and the rest
    int partIndex = 0;

    while (num > 0) {
        parts[partIndex++] = num % 1000;
        num /= 1000;
    }

    for (int i = partIndex - 1; i >= 0; i--) {
        int part = parts[i];
        if (part == 0) continue;

        int hundred = part / 100;
        int ten = (part % 100) / 10;
        int one = part % 10;

        if (hundred > 0) {
            strcat(result, ones[hundred]);
            strcat(result, " Hundred");
        }

        if (ten == 1) {
            if (hundred > 0) strcat(result, " ");
            strcat(result, teens[one]);
        } else {
            if (hundred > 0 && (ten > 0 || one > 0)) strcat(result, " ");
            if (ten > 1) {
                strcat(result, tens[ten]);
                if (one > 0) strcat(result, " ");
            }
            if (one > 0) {
                strcat(result, ones[one]);
            }
        }

        if (i > 0) {
            strcat(result, " ");
            strcat(result, thousands[i]);
        }

        if (i > 0 && parts[i - 1] > 0) {
            strcat(result, ", ");
        }
    }
}

int main() {
    int n;
    char result[1000] = ""; // Ensure this is large enough to hold the output for large numbers

    printf("Enter a number: ");
    scanf("%d", &n);

    numberToWords(n, result);

    printf("%s\n", result);

    return 0;
}
