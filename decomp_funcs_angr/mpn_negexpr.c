typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpn_neg()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long [2] v6;  // rsi
    struct_1 *v7;  // rdi
    unsigned long long v9;  // r8

    v9 = v6[0];
    v1 = v5 - 1;
    if (v6[0] != 0)
    {
        v3 = v6[0];
    }
    else
    {
        while (true)
        {
            *(rdi<8> + None) = 0;
            if (v1 != 0)
            {
                v3 = v6[1];
                v6 += 8;
                v5 = v1;
                v7 = rdi<8> + 8;
                v1 -= 1;
                if (v3 != 0)
                {
                    break;
                }
            }
            else
            {
                return v9;
            }
        }
    }
    v2 = 0;
    v7->field_0 = 0 - v3;
    if (v5 > 1)
    {
        do
        {
            *(v7 + v2 * 8 + 8) = !(*(rsi<8> + v2 * 8 + 8));
            v2 += 1;
        }
        while (v5 - 1 != v2);
        return 1;
    }
    return 1;
}
