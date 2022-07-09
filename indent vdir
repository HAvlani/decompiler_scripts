extern unsigned long long stdout[7];
extern struct_0 tabsize;

int indent()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbp
    char *|unsigned long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long long v2;  // [bp-0x8]
    unsigned long|unsigned long long v4;  // rax
    unsigned long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long v9;  // rbx

    if (v13 < v12)
    {
        v2 = v15;
        v14 = v12;
        v1 = &stack_base+0;
        v0 = v9;
        v8 = v13;
        while (true)
        {
            v6 = tabsize;
            v11 = v8 + 1;
            v12 = *(stdout + 40);
            if (((long long)((0 CONCAT v14) % v6)) > ((long long)((0 CONCAT v8) % v6)) && tabsize != 0)
            {
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v12) = 9;
                }
                else
                {
                    __overflow();
                    v6 = tabsize;
                }
                v4 = ((long long)((0 CONCAT v8) % v6));
                v7 = ((long long)((0 CONCAT v8) % v6 >> 64));
                v6 += v8;
                v8 = v6 - v7;
                v10 = v0;
                v16 = v2;
                return v4;
            }
            if (((long long)((0 CONCAT v14) % v6)) <= ((long long)((0 CONCAT v8) % v6)) || tabsize == 0)
            {
                if (*(stdout + 40) < *(stdout + 48))
                {
                    v4 = v12 + 1;
                    *(stdout + 40) = v12 + 1;
                    *(v12) = 32;
                }
                else
                {
                    v4 = __overflow();
                }
                v8 = v11;
                v10 = v0;
                v16 = v2;
                return v4;
            }
        }
    }
    return v5;
}
