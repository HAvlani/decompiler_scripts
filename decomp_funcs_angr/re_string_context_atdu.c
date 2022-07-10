typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[64];
    unsigned long long field_58;
    char padding_60[16];
    unsigned int field_70;
    char padding_74[12];
    unsigned long long field_80;
    char padding_88[5];
    char field_8d;
    char field_8e;
    char padding_8f[1];
    unsigned int field_90;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

int re_string_context_at()
{
    unsigned long long v1;  // rax
    struct_2 *|unsigned long long v2;  // rax
    unsigned int v3;  // edx
    unsigned int v4;  // edx
    unsigned int v5;  // ebx
    struct_2 * v6;  // rsi
    struct_0 *v7;  // rdi

    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        return ((long long)v7->field_70);
    }
    else if (!(v7->field_58 != v6))
    {
        v4 = ((int)(v3 & 2));
        v1 = ((long long)((0 - ((int)((v3 & 2) < 1)) & 2) + 8));
        return v1;
    }
    else if (v7->field_90 > 1)
    {
        v2 = v7->field_10;
        while (true)
        {
            v5 = ((int)*(v2 + v6 * 4));
            if (*(v2 + (v6 << 2)) == -1)
            {
                v6 -= 1;
                return ((long long)v7->field_70);
            }
            else if (v7->field_8e == 0)
            {
                v1 = 0;
                if (v5 != 10)
                {
                    return ((long long)(((int)(v7->field_8d != 0)) * 2));
                    return v1;
                }
            }
            else
            {
                v2 = iswalnum(v5);
                if (v2 != 0)
                {
                    v1 = 1;
                    return v1;
                }
                else if (v5 != 95)
                {
                    v1 = 0;
                    if (v5 != 10)
                    {
                        return ((long long)(((int)(v7->field_8d != 0)) * 2));
                        return v1;
                    }
                }
                else
                {
                    v1 = 1;
                    return v1;
                }
            }
        }
    }
    else
    {
        v1 = 1;
        if (...)
        {
            return v1;
        }
        v1 = 0;
        if (*(v7->field_8 + v6) != 10)
        {
            return v1;
        }
        else
        {
            return ((long long)(((int)(v7->field_8d != 0)) * 2));
        }
    }
}
