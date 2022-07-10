typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_mbrtowc()
{
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    struct_0 *v4;  // rbx
    char *v5;  // rsi
    unsigned long v6;  // rdi
    unsigned int v7;  // rdi
    unsigned long long v8;  // r12

    v4 = (v6 == 0? &stack_base-52 : v6);
    ((unsigned int)v7) = (v6 == 0? &stack_base-52 : v6);
    v8 = mbrtowc(((unsigned int)v7));
    if (!(v8 > 18446744069414584317))
    {
        v2 = v8;
        return v2;
    }
    else if (v3 == 0)
    {
        v2 = v8;
        return v2;
    }
    else if ((long long)hard_locale() != 0)
    {
        v2 = v8;
        return v2;
    }
    else
    {
        v8 = 1;
        v4->field_0 = ((int)*(v5));
        v2 = v8;
        return v2;
    }
}
