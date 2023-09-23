#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    currentTime = time(NULL);

    char *timeString = ctime(&currentTime);
    printf("Current time: %s", timeString);

    return 0;
}
