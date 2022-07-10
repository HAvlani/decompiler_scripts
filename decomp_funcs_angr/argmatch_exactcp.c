int argmatch_exact()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rsi
    char *v6;  // rdi
    char * v7;  // rdi
    char *v8;  // r12

    v8 = v6;
    v7 = *(v5);
    if (*(v5) != 0)
    {
        v4 = v5;
        v3 = 0;
        while (true)
        {
            v2 = strcmp(v7, v8);
            if (v2 != 0)
            {
                v3 += 1;
                v7 = *(v4 + v3 * 8);
                return 18446744069414584319;
            }
            v1 = v3;
            return v1;
        }
    }
    return 18446744069414584319;
}
