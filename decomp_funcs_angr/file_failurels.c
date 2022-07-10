extern unsigned int exit_status;

int file_failure()
{
    unsigned long long v1;  // rax
    char *v2;  // rsi
    char v3;  // dil
    unsigned long long v4;  // r13

    v4 = (long long)quotearg_style();
    v1 = error(0x0, *(__errno_location()), v2);
    if (((long long)v3) != 0)
    {
        exit_status = 2;
        return v1;
    }
    v1 = ((long long)exit_status);
    if (exit_status != 0)
    {
        return v1;
    }
    else
    {
        exit_status = 1;
        return ((long long)exit_status);
    }
}
