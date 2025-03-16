#include <stdio.h>
#include <conio.h>
#include <time.h>

void proc_a(void)
{
    printf("A");
}

void proc_b(voif)
{
    printf("1");
}

int proc_c(void)
{
    char c;
    c = get_ch();
    if(c == '1')
        return 1;
    return 0;
}

clock_t timp, timp_a = 0, timp_b = 0;

int main(void)
{
    int gata = 0;

    while(gata == 0)
    {
        timp = clock();
        if(timp >= timp_a)
        {
            proc_a();
            timp_a += 1000; 
        }
        if(timp >= timp_b)
        {
            proc_b();
            timp_b += 1600;
        }
        if(kbhit() == 1)
            gata = proc_c();
    }
}