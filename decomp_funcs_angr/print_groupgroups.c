typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_407368;
extern struct_0 stdout;

int print_group()
{
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long long|char v4;  // sil
    char * v5;  // rdi
    unsigned int v6;  // edi
    unsigned long long v7;  // r12

    v7 = 1;
    if (((long long)v4) != 0)
    {
        v3 = getgrgid(v6);
        if (v3 != 0)
        {
            v5 = v3->field_0;
            v7 = v4;
            fputs_unlocked(v5, stdout);
            v2 = v7;
            return v2;
        }
        v7 = 0;
        error(0x0, 0x0, dcgettext(0x0, &g_407368, 0x5));
        v5 = (long long)umaxtostr();
        fputs_unlocked(v5, stdout);
        v2 = v7;
        return v2;
    }
    v5 = (long long)umaxtostr();
    fputs_unlocked(v5, stdout);
    v2 = v7;
    return v2;
}
