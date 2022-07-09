extern char printed.7167;
extern unsigned long long stdout[7];

int print_element()
{
    char *v1;  // rax

    if (printed.7167 != 0)
    {
        v1 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v1) = 32;
            printed.7167 = 1;
        }
        else
        {
            __overflow();
            printed.7167 = 1;
        }
    }
    else
    {
        printed.7167 = 1;
    }
}
