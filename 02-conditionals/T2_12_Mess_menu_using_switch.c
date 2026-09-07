#include <stdio.h>

int main() {
    int day;

    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: Rajma Chawal");
            break;

        case 2:
            printf("Tuesday: Paneer Curry");
            break;

        case 3:
            printf("Wednesday: Veg Biryani");
            break;

        case 4:
            printf("Thursday: Dal Tadka");
            break;

        case 5:
            printf("Friday: Chole Bhature");
            break;

        case 6:
            printf("Saturday: Masala Dosa");
            break;

        case 7:
            printf("Sunday: Veg Pulao");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}