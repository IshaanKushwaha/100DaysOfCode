//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    int d, m, y;
    char months[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    char date[20];

    printf("Enter date (dd/mm/yyyy): ");
    if (!fgets(date, sizeof date, stdin)) return 0;
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    if (m < 1 || m > 12) printf("Invalid month\n");
    else printf("Converted: %02d-%s-%04d\n", d, months[m-1], y);

    return 0;
}
