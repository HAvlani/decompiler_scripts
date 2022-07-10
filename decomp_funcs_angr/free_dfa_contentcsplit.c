typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern <missing-type> utf8_sb_map;

int free_dfa_content()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long|unsigned long long v12;  // rbx
    unsigned long long v13;  // rbx
    struct_0 *v14;  // rbp
    struct_0 * v15;  // rdi
    unsigned long long v16[18];  // rdi
    unsigned long long v17;  // rdi
    unsigned long long v18[18];  // r12
    unsigned long v19;  // r12
    unsigned long v2;  // [bp-0x8]
    unsigned long v20;  // r13
    unsigned long long v21;  // r13

    v2 = v20;
    v1 = v19;
    v18 = v16;
    v0 = v12;
    v17 = v16[0];
    if (v17 != 0)
    {
        if (v18[2] != 0)
        {
            v12 = 0;
            while (true)
            {
                v12 += 1;
                free_token();
                if (v18[2] <= v12)
                {
                    break;
                }
            }
        }
    }
    v13 = 0;
    rpl_free();
    if (v18[2] != 0)
    {
        do
        {
            if (v18[6] != 0)
            {
                rpl_free();
            }
            if (v18[7] != 0)
            {
                rpl_free();
            }
            if (v18[5] != 0)
            {
                rpl_free();
            }
            v13 += 1;
        }
        while (v18[2] > v13);
    }
    v21 = 0;
    rpl_free();
    rpl_free();
    rpl_free();
    rpl_free();
    v15 = v18[8];
    if (v18[8] != 0)
    {
        while (true)
        {
            v13 = 0;
            v14 = v15 + v21 * 24;
            if (*(v15 + (v21 + (v21 << 1) << 3)) > 0)
            {
                while (true)
                {
                    v13 += 1;
                    free_state();
                    if (v14->field_0 <= v13)
                    {
                        break;
                    }
                }
            }
            v21 += 1;
            rpl_free();
            if (v18[17] < v21)
            {
                break;
            }
            v15 = v18[8];
        }
    }
    rpl_free();
    if (v18[15] != 4298880)
    {
        rpl_free();
        rpl_free();
    }
    else
    {
        rpl_free();
    }
}
