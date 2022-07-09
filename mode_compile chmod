typedef struct struct_1 {
    unsigned short field_0;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[1];
    char field_11;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

int mode_compile()
{
    BOT tmp_50;  // tmp #50
    BOT tmp_60;  // tmp #60
    unsigned long long v1;  // rax
    unsigned long long v10;  // rcx
    unsigned int v11;  // ecx
    unsigned long long v12;  // rdx
    char v13;  // dl
    char v14[3];  // rbx
    unsigned long long v16;  // rbp
    char [3]|unsigned long long v18;  // rdi
    unsigned long long v2;  // rax
    char v3;  // al
    struct_1 *v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long|char *|unsigned int v7;  // rcx
    unsigned int v8;  // ecx

    v7 = v18;
    v14 = v18;
    v12 = ((long long)v18[0]);
    v7 = ((long long)(v11 | 73));
    v7 = ((int)(v8 | 292));
    if ((((long long)v18[0]) - 48 & 255) > 7)
    {
        v18 = 1;
        if (((long long)v12) != 0)
        {
            /* goto 4224432; */
        }
        if (((char)v12) == 0 || ((long long)v12) == 0)
        {
            v6 = xnmalloc();
        }
    }
    else
    {
        v16 = 0;
        /* goto 4225010; */
        if (((int)v16) <= 4095)
        {
            if ((((long long)*(v7)) - 48 & 255) > 7)
            {
                v6 = 0;
                if (((long long)v12) != 0)
                {
                    return v6;
                }
                v10 = v7 - v18;
                v5 = xmalloc();
                v5->field_0 = 317;
                v5->field_4 = 4095;
                v5->field_8 = ((int)v16);
                v5->field_c = ((int)(5 <= v10? 4095 : ((int)rbp<8>) & 0xc00 | 1023));
                v5->field_11 = 0;
                return v5;
            }
        }
    }
    if ((((long long)v18[0]) - 48 & 255) <= 7 || (((long long)*(v7)) - 48 & 255) <= 7)
    {
        v16 = v12 + v16 * 8 - 48;
        v7 += 1;
        if (((int)v16) <= 4095)
        {
            v12 = ((long long)*(v7));
        }
        else
        {
            return 0;
        }
    }
    if (((char)v12) != 0 || ((long long)v12) != 0 && (((long long)v18[0]) - 48 & 255) > 7)
    {
        v2 = ((long long)(((int)v12) & -17));
        v3 = ((char)(((char)(((int)v12) & -17)) == 45));
        v13 = ((char)(v12 == 43));
        v7 += 1;
        tmp_50 = rax<8>;
        v1 = ((long long)(((int)tmp_50) | ((int)v12)));
        v12 = ((long long)*(v7));
        tmp_60 = v1;
        v18 += ((long long)tmp_60);
    }
}
