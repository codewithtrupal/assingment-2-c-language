#include <stdio.h>

// Define the structure 'time'
struct time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference in total seconds between two times
int timeDifference(struct time t1, struct time t2) {
    // Convert both times to total seconds
    int total_seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total_seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    // Calculate the absolute difference in seconds
    int diff_seconds = total_seconds1 - total_seconds2;
    
    // If the result is negative, convert it to positive
    if (diff_seconds < 0) {
        diff_seconds = -diff_seconds;
    }
    
    return diff_seconds;  // Return the total difference in seconds
}

void displayTimeDifference(int diff_seconds) {
    // Convert the difference in seconds back to hours, minutes, and seconds
    int hours = diff_seconds / 3600;
    diff_seconds %= 3600;
    int minutes = diff_seconds / 60;
    int seconds = diff_seconds % 60;

    // Output the difference in hours, minutes, and seconds
    printf("Time difference is: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
}

int main() {
    struct time time1, time2;
    
    // Get the first time input
    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
    
    // Get the second time input
    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);
    
    // Get the time difference in seconds
    int diff_seconds = timeDifference(time1, time2);
    
    // Display the time difference in hours, minutes, and seconds
    displayTimeDifference(diff_seconds);
    
    return 0;
}
