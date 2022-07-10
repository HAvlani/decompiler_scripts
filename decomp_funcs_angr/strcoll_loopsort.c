typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int strcoll_loop()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r12
    unsigned long long v11;  // r13
    char * v13;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    char *v5;  // rdx
    unsigned long long v6;  // rbx
    char * v7;  // rbp
    unsigned long long v8;  // rsi
    char *v9;  // rdi

    v13 = v9;
    v11 = v8;
    v10 = v4;
    v7 = v5;
    while (true)
    {
        *(__errno_location() + None) = 0;
        v2 = strcoll(((int)v13), ((int)v7));
        if (((int)v2) == 0)
        {
            v6 = strlen(v13) + 1;
            v13 += v6;
            v1 = strlen(v7) + 1;
            v7 += v1;
            v10 -= v1;
            v11 -= v6;
            if (v11 != v6)
            {
                return 1;
            }
            v3 = ((long long)(0 - ((int)(v10 != 0))));
            return v3;
        }
        return v2;
    }
}
