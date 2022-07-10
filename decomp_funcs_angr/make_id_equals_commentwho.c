extern unsigned int g_40a01c;

int make_id_equals_comment()
{
    unsigned long v1;  // rax
    unsigned long long v10;  // r12
    unsigned long long v2;  // rax
    char * v3;  // rax
    unsigned long long v5;  // rcx
    char * v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rdi
    unsigned long v9;  // rdi

    v7 = v9;
    strlen(dcgettext(0x0, &g_40a01c, 0x5));
    v10 = (long long)xmalloc();
    v1 = dcgettext(0x0, &g_40a01c, 0x5);
    v3 = stpcpy(((int)v1), v1);
    v6 = v7 + 40;
    v8 = v7 + 44;
    while (true)
    {
        v5 = ((long long)*(v6));
        if (((long long)*(v6)) != 0)
        {
            v6 += 1;
            v3 += 1;
            *(v3 + 0x1) = v5;
            *(v3) = 0;
            v1 = v10;
            return v2;
        }
        *(v3) = 0;
        v1 = v10;
        return v2;
    }
}
