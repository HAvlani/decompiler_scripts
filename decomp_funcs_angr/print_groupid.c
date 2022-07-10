typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_408818;
extern struct_0 stdout;

int print_group()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rax
    char|unsigned long long v4;  // rsi
    unsigned int v5;  // edi
    char * v6;  // rdi
    unsigned long long v7;  // r12

    v7 = 1;
    if (((long long)v4) != 0)
    {
        v2 = getgrgid(v5);
        if (v2 != 0)
        {
            v6 = v2->field_0;
            v7 = v4;
            fputs_unlocked(v6, stdout);
            v1 = v7;
            return v1;
        }
        v7 = 0;
        error(0x0, 0x0, dcgettext(0x0, &g_408818, 0x5));
        v6 = (long long)umaxtostr();
        fputs_unlocked(v6, stdout);
        v1 = v7;
        return v1;
    }
    v6 = (long long)umaxtostr();
    fputs_unlocked(v6, stdout);
    v1 = v7;
    return v1;
}
