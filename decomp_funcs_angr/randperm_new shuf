int randperm_new()
{
    BOT tmp_9;  // tmp #9
    unsigned int v0;  // [bp-0x8c]
    unsigned long v1;  // [bp-0x88]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // rdx
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rsi
    unsigned long long [2] v18;  // r8
    unsigned long|unsigned long long [2] v2;  // [bp-0x80]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    unsigned long long v3[2];  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]

    if (v17 != 0)
    {
        v16 = v17;
        if (v17 == 1)
        {
            v20 = (long long)xmalloc();
            *(v20) = (long long)randint_genmax();
            v13 = v20;
            return v13;
        }
        if (!(v14 > 131071))
        {
            v20 = (long long)xnmalloc();
            if (v14 == 0)
            {
                /* goto 4219469; */
            }
        }
        else if (((long long)((0 CONCAT v14) % v17)) <= 31)
        {
            v20 = (long long)xnmalloc();
        }
        else
        {
            v21 = (long long)hash_initialize();
            if (v21 != 0)
            {
                v0 = 1;
                v20 = (long long)xnmalloc();
                /* goto 4219480; */
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
        if (v14 <= 131071 && v14 != 0 || ((long long)((0 CONCAT v14) % v17)) <= 31 && v14 > 131071)
        {
            v12 = 0;
            do
            {
                *(v20 + v12 * 8) = v12;
                v12 += 1;
            }
            while (v14 > v12);
        }
        if (v14 <= 131071 || ((long long)((0 CONCAT v14) % v17)) <= 31)
        {
            v0 = 0;
        }
        if (v14 <= 131071 || ((long long)((0 CONCAT v14) % v17)) <= 31 || v21 != 0)
        {
            v15 = 0;
            v1 = v14 - 1;
            v4 = &stack_base-88;
            while (true)
            {
                v22 = (long long)randint_genmax() + v15;
                if (v0 == 0)
                {
                    v17 = *(v20 + v15 * 8);
                    *(v20 + v15 * 8) = *(v20 + v22 * 8);
                    v15 += 1;
                    *(v20 + v22 * 8) = v17;
                }
                else
                {
                    v7 = v15;
                    v8 = 0;
                    v5 = v22;
                    v2 = (long long)hash_remove();
                    v6 = 0;
                    v18 = (long long)hash_remove();
                    if (v2 == 0)
                    {
                        v2 = v18;
                        *(v2 + 8) = v15;
                        v3[0] = v15;
                    }
                    if (v18 != 0)
                    {
                        v22 = v18[1];
                    }
                    else
                    {
                        v2 = v3;
                        v18[1] = v22;
                        v18 = (long long)xmalloc();
                        v18[0] = v22;
                    }
                    tmp_9 = v3[1];
                    v3[1] = r15<8>;
                    v2 = v18;
                    v18[1] = tmp_9;
                    v3 = (long long)xmalloc();
                    v12 = hash_insert();
                    if (v12 != 0)
                    {
                        xalloc_die(); /* do not return */
                        v12 = hash_insert();
                        if (v12 != 0)
                        {
                            xalloc_die(); /* do not return */
                            *(v20 + v15 * 8) = v3[1];
                            v15 += 1;
                        }
                    }
                }
                if ((v0 == 0 || v16 <= v15) && (v0 == 0 || v12 != 0) && (v0 == 0 || v12 != 0) && (v16 <= v15 || v0 != 0))
                {
                    if (v0 != 0)
                    {
                        hash_free();
                        v13 = v20;
                        return v13;
                    }
                    else
                    {
                        xreallocarray();
                        v13 = v20;
                        return v13;
                    }
                }
            }
        }
    }
    v13 = v20;
    return v13;
}
