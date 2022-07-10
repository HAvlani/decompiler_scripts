int hash_rehash()
{
    BOT tmp_50;  // tmp #50
    BOT tmp_61;  // tmp #61
    BOT tmp_70;  // tmp #70
    BOT tmp_78;  // tmp #78
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v11;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long|unsigned long long v15;  // rbx
    unsigned long long v16[10];  // rbp
    unsigned long long v17[10];  // rdi
    unsigned long long v18;  // r12
    unsigned long long v19;  // r12
    unsigned long|unsigned int v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]

    v16 = v17;
    v18 = v17[5];
    if (v15 != 0)
    {
        v15 = compute_bucket_size.isra.0();
        if (v17[2] != ((unsigned int)v2))
        {
            v0 = calloc(((unsigned int)v2), 0x10);
            if (v0 != 0)
            {
                v2 = v15;
                v15 = v2 * 16 + v0;
                tmp_50 = v16[6];
                v5 = v18;
                v6 = tmp_50;
                tmp_61 = v16[7];
                v1 = v15;
                v7 = tmp_61;
                tmp_70 = v16[8];
                v3 = 0;
                v8 = tmp_70;
                tmp_78 = v16[9];
                v4 = 0;
                v9 = tmp_78;
                v19 = (long long)transfer_entries();
                if (((long long)v19) == 0)
                {
                    v16[9] = v9;
                    v11 = transfer_entries();
                    v13 = transfer_entries();
                    rpl_free();
                    v14 = v19;
                    return v14;
                }
                rpl_free();
                v16[0] = v0;
                v16[1] = v1;
                v16[2] = v2;
                v16[3] = v3;
                v16[9] = v9;
                v14 = v19;
                return v14;
            }
            v19 = 0;
            v14 = v19;
            return v14;
        }
        v19 = 1;
        v14 = v19;
        return v14;
    }
    v19 = 0;
    v14 = v19;
    return v14;
}
