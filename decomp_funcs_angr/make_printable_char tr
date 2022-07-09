typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern unsigned int g_409004;

int make_printable_char()
{
    char *v1;  // rax
    char v3;  // dil
    struct_0 *v4;  // r12
    unsigned long long v5;  // cc_dep1

    v4 = (long long)xmalloc();
    v1 = *(__ctype_b_loc());
    v5 = ((long long)(*(v1 + ((long long)v3) * 2 + 1) & 64));
    if (((char)v5) != 0)
    {
        *(v1) = v3;
        v4->field_1 = 0;
        return v4;
    }
    __sprintf_chk(((int)v1), 0x1, 0x5, &g_409004, ((int)v3));
    return v1;
}
