extern <missing-type> default_tuning;
extern <missing-type> raw_comparator;
extern <missing-type> raw_hasher;

int hash_initialize()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rcx
    unsigned long v4;  // rdx
    unsigned long v5;  // rsi
    unsigned long v6;  // rdi
    unsigned long v7;  // r8
    unsigned long long v8;  // r12
    unsigned long|unsigned long long v9;  // r13

    v8 = malloc(0x50);
    if (v8 != 0)
    {
        *(v8 + 40) = (v5 == 0? &default_tuning : v5);
        v2 = check_tuning.isra.0();
        if (((long long)v2) != 0)
        {
            *(v8 + 16) = v6;
            v9 = (long long)compute_bucket_size.isra.0();
            if (v9 != 0)
            {
                v2 = calloc(v9, 0x10);
                *(v8) = v2;
                if (v2 != 0)
                {
                    *(v8 + 48) = (v4 == 0? &raw_hasher : v4);
                    v9 = v9 * 16 + v2;
                    *(v8 + 56) = (v3 == 0? &raw_comparator : v3);
                    *(v8 + 8) = v9;
                    *(v8 + 24) = 0;
                    *(v8 + 32) = 0;
                    *(v8 + 64) = v7;
                    *(v8 + 72) = 0;
                    v1 = v8;
                    return v1;
                }
                v8 = 0;
                rpl_free();
                v1 = v8;
                return v1;
            }
            v8 = 0;
            rpl_free();
            v1 = v8;
            return v1;
        }
        v8 = 0;
        rpl_free();
        v1 = v8;
        return v1;
    }
    v1 = v8;
    return v1;
}
