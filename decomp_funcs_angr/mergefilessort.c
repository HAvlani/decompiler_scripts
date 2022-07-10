extern unsigned int g_416be1;

int mergefiles()
{
    unsigned long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    unsigned long long v6;  // r12

    v6 = (long long)open_input_files();
    if (!(v5 > v2))
    {
        mergefps();
        v2 = v6;
        return v4;
    }
    else if (v2 > 1)
    {
        mergefps();
        v2 = v6;
        return v4;
    }
    else
    {
        dcgettext(0x0, &g_416be1, 0x5);
        sort_die(); /* do not return */
    }
}
