typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int readtoken()
{
    BOT tmp_34;  // tmp #34
    unsigned long v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v10;  // rbx
    unsigned long long v11[3];  // rbp
    char * v12;  // rsi
    unsigned long long v13[3];  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    unsigned long long v16[2];  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // r15
    uint128_t v2;  // [bp-0x68]
    uint128_t v3;  // [bp-0x58]
    struct_1 *v5;  // rax
    char *|unsigned long long v6;  // rax
    char *v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long|char * v9;  // rdx

    v15 = v12 + v9;
    v16 = v8;
    v11 = v13;
    v2 = 0;
    v3 = 0;
    if (v9 != 0)
    {
        do
        {
            v8 = ((long long)*(v12));
            v12 += 1;
            tmp_34 = v8;
            v5 = ((long long)(((int)v8) % 8 & 24));
            *(&stack_base-104 + v5) = *(&stack_base-104 + v5) | 1 << (tmp_34 & 63);
        }
        while (v15 != v12);
        v6 = v11[1];
    }
    while (true)
    {
        v11[1] = v6 + 1;
        v10 = ((long long)*(v6));
        while (true)
        {
            v0 = *(&stack_base-120 + v10 % 64 * 8 + 16);
            if ((((char)(((long long)*(&stack_base-408 + ((v10 & 63) >> 3))) >> ((long long)((char)(v10 & 63 & 7))))) & 1) != 0)
            {
                v6 = v11[1];
                v10 = __uflow(((int)v11));
            }
            else
            {
                v6 = v16[0];
                v18 = v16[1];
                v17 = 0;
                v1 = v16[0];
                while (true)
                {
                    if (v17 != v6)
                    {
                        v14 = v17;
                        v9 = v18 + v17;
                        if (((int)rbx<8>) < 0)
                        {
                            *(v9) = 0;
                            v16[1] = v18;
                            v16[0] = v1;
                            return v14;
                        }
                    }
                    v18 = (long long)xpalloc();
                    v9 = v18 + v17;
                    if (((int)rbx<8>) < 0)
                    {
                        *(v9) = 0;
                        v16[1] = v18;
                        v16[0] = v1;
                    }
                    if (v17 == v6 && ((int)rbx<8>) >= 0 || ((int)rbx<8>) >= 0 && v17 != v6)
                    {
                        v0 = *(&stack_base-120 + rbx<8> % 64 * 8 + 16);
                        if ((((char)(((long long)*(&stack_base-408 + ((rbx<8> & 63) >> 3))) >> ((long long)((char)(rbx<8> & 63 & 7))))) & 1) == 0)
                        {
                            *(rdx<8> + None) = bl<1>;
                            v17 += 1;
                            v7 = v11[1];
                            if (v11[1] < v11[2])
                            {
                                v11[1] = v13[1] + 1;
                                v10 = ((long long)*(v7));
                            }
                            else
                            {
                                v10 = __uflow(((int)v11));
                            }
                            v6 = v1;
                        }
                        else
                        {
                            *(v9) = 0;
                            v16[1] = v18;
                            v16[0] = v1;
                            return v14;
                        }
                    }
                }
                return v14;
            }
        }
        if (v11[1] >= v11[2] && (((char)(((long long)*(&stack_base-408 + ((v10 & 63) >> 3))) >> ((long long)((char)(v10 & 63 & 7))))) & 1) != 0)
        {
            v14 = 18446744069414584319;
        }
        else if ((((char)(((long long)*(&stack_base-408 + ((v10 & 63) >> 3))) >> ((long long)((char)(v10 & 63 & 7))))) & 1) != 0)
        {
            v11[1] = v6 + 1;
            v10 = ((long long)*(v6));
        }
    }
    v14 = 18446744069414584319;
    return v14;
}
