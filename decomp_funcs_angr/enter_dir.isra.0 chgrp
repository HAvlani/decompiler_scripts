typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[96];
    unsigned short field_68;
    char padding_6a[6];
    unsigned long long field_70;
    unsigned long long field_78;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int enter_dir.isra.0()
{
    BOT tmp_10;  // tmp #10
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    struct_1 *v5;  // rbx
    unsigned long long v6[3];  // rbp
    unsigned int v7;  // edi
    struct_0 *v8;  // r12

    v5 = v4;
    if ((((short)v7) & 258) != 0)
    {
        v6 = malloc(0x18);
        if (v6 != 0)
        {
            tmp_10 = v5->field_70;
            v6[2] = v5;
            v6[0] = tmp_10;
            v6[1] = v5->field_78;
            v8 = (long long)hash_insert();
            if (v6 != v8)
            {
                rpl_free();
                if (v8 != 0)
                {
                    v2 = v8->field_10;
                    v5->field_68 = 2;
                    v5->field_0 = v2;
                    v3 = 1;
                    return v3;
                }
                v3 = 0;
                return v3;
            }
            v3 = 1;
            return v3;
        }
        v3 = 0;
        return v3;
    }
    v2 = cycle_check();
    if (((long long)v2) == 0)
    {
        v3 = 1;
        return v3;
    }
    else
    {
        v5->field_0 = v5;
        v5->field_68 = 2;
        return v2;
    }
}
