typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_mbrtowc()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rdx
    struct_0 *v4;  // rbx
    char *v5;  // rsi
    unsigned int v6;  // rdi
    unsigned long v7;  // rdi
    unsigned long long v8;  // r12

    v4 = (v7 == 0? &stack_base-52 : v7);
    ((unsigned int)v6) = (v7 == 0? &stack_base-52 : v7);
    v8 = mbrtowc(((unsigned int)v6));
    if (!(v8 > 18446744069414584317))
    {
        v1 = v8;
        return v1;
    }
    else if (v3 == 0)
    {
        v1 = v8;
        return v1;
    }
    else if ((long long)hard_locale() != 0)
    {
        v1 = v8;
        return v1;
    }
    else
    {
        v8 = 1;
        v4->field_0 = ((int)*(v5));
        v1 = v8;
        return v1;
    }
}
