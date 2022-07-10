typedef struct struct_0 {
    unsigned short field_0;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[1];
    char field_11;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_1;

int mode_compile()
{
    BOT tmp_50;  // tmp #50
    BOT tmp_60;  // tmp #60
    unsigned int v11;  // ecx
    unsigned long long v12;  // rdx
    char v13;  // dl
    char v14[3];  // rbx
    unsigned long long v16;  // rbp
    char [3]|unsigned long long v18;  // rdi
    char v2;  // al
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_0 *v6;  // rax
    unsigned long long|char [3] v7;  // rcx
    unsigned long long v8;  // rcx
    unsigned int v9;  // ecx

    v7 = v18;
    v14 = v18;
    v12 = ((long long)v18[0]);
    v7 = ((long long)(v11 | 73));
    v7 = ((long long)(v9 | 292));
    if ((((long long)v18[0]) - 48 & 255) > 7)
    {
        v18 = 1;
        if (((long long)v12) != 0)
        {
            /* goto 4253520; */
        }
        if (((long long)v12) == 0 || ((char)v12) == 0)
        {
            v5 = xnmalloc();
        }
    }
    else
    {
        v16 = 0;
        /* goto 4254098; */
        if (((int)v16) <= 4095)
        {
            if ((((long long)v7[0]) - 48 & 255) > 7)
            {
                v5 = 0;
                if (((long long)v12) != 0)
                {
                    return v5;
                }
                v8 = v7 - v18;
                v6 = xmalloc();
                v6->field_0 = 317;
                v6->field_4 = 4095;
                v6->field_8 = ((int)v16);
                v6->field_c = ((int)(5 <= v8? 4095 : ((int)rbp<8>) & 0xc00 | 1023));
                v6->field_11 = 0;
                return v6;
            }
        }
    }
    if ((((long long)v7[0]) - 48 & 255) <= 7 || (((long long)v18[0]) - 48 & 255) <= 7)
    {
        v16 = v12 + v16 * 8 - 48;
        v7 += 1;
        if (((int)v16) <= 4095)
        {
            v12 = ((long long)v7[0]);
        }
        else
        {
            return 0;
        }
    }
    if (((char)v12) != 0 || ((long long)v12) != 0 && (((long long)v18[0]) - 48 & 255) > 7)
    {
        v4 = ((long long)(((int)v12) & -17));
        v2 = ((char)(((char)(((int)v12) & -17)) == 45));
        v13 = ((char)(v12 == 43));
        v7 += 1;
        tmp_50 = rax<8>;
        v3 = ((long long)(((int)tmp_50) | ((int)v12)));
        v12 = ((long long)v7[0]);
        tmp_60 = v3;
        v18 += ((long long)tmp_60);
    }
}
