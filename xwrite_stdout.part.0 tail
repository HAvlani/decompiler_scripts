extern unsigned int g_40d036;
extern struct_0 stdout;

int xwrite_stdout.part.0()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // rsi
    void *v3;  // rdi
    unsigned long long v4;  // r13

    v1 = fwrite_unlocked(v3, 0x1, ((unsigned int)v2), stdout);
    if (((unsigned int)v2) <= v1)
    {
        return v1;
    }
    clearerr_unlocked(((int)stdout));
    v4 = (long long)quotearg_style();
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40d036, 0x5));
}
