// AI generated code
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    const char *message = "Hello, World!";
    char output[sizeof("Hello, World!")];
    memset(output, 0, sizeof(output));

    for (size_t i = 0; i < strlen(message); i++)
    {
        char target = message[i];
        if (target == ' ')
        {
            output[i] = ' ';
            printf("%s", " ");
            fflush(stdout);
            continue;
        }
        for (char current = 32; current != target; current = (current == 126 ? 32 : current + 1))
        {
            printf("\r%s%c", output, current);
            fflush(stdout);
            usleep(6000);
        }
        output[i] = target;
        printf("\r%s", output);
        fflush(stdout);
    }
    printf("\n");
    return 0;
}
