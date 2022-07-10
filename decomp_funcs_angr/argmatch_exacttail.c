int argmatch_exact()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rsi
    char * v6;  // rdi
    unsigned long v7;  // rdi
    char *v8;  // r12

    v8 = v7;
    v6 = *(v5);
    if (*(v5) != 0)
    {
        v4 = v5;
        v3 = 0;
        while (true)
        {
            v1 = strcmp(v6, v8);
            if (v1 != 0)
            {
                v3 += 1;
                v6 = *(v4 + v3 * 8);
                return 18446744069414584319;
            }
            v2 = v3;
            return v2;
        }
    }
    return 18446744069414584319;
}
