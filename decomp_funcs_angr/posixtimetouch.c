typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int posixtime()
{
    BOT tmp_14;  // tmp #14
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned int v10;  // [bp-0x84]
    unsigned int v11;  // [bp-0x80]
    unsigned int v12;  // [bp-0x78]
    unsigned int v13;  // [bp-0x58]
    unsigned int v14;  // [bp-0x54]
    unsigned int v15;  // [bp-0x50]
    unsigned int v16;  // [bp-0x4c]
    unsigned int v17;  // [bp-0x10]
    unsigned int v18;  // [bp-0xc]
    unsigned int v19;  // [bp-0x8]
    unsigned int v2;  // [bp-0xd0]
    unsigned int v20;  // [bp-0x4]
    unsigned long|unsigned long long|unsigned int v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long|unsigned int v25;  // ecx
    unsigned long long v26;  // rdx
    unsigned long|unsigned long long|unsigned int v27;  // rbx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // esi
    unsigned int v3;  // [bp-0xcc]
    unsigned long|unsigned int v30;  // edi
    unsigned long|unsigned int v31;  // r8d
    unsigned long|unsigned int v32;  // r9d
    struct_1 *v33;  // r12
    unsigned long long v34;  // r13
    unsigned long long v35;  // r14
    unsigned long long v36;  // r15
    unsigned int v4;  // [bp-0xc8]
    unsigned int v5;  // [bp-0xc4]
    unsigned int v6;  // [bp-0x94]
    unsigned int v7;  // [bp-0x90]
    unsigned int v8;  // [bp-0x8c]
    unsigned long long v9;  // [bp-0x88]

    v34 = v26;
    v33 = v30;
    v28 = v29;
    v22 = strlen(v29);
    v27 = v22;
    v36 = v22;
    if (((long long)(((char)v26) & 4)) != 0)
    {
        v35 = strchr(v29, 0x2e);
        if (v35 != 0)
        {
            v22 = v35 - v29;
            v27 -= v35 - v29;
            if (v27 != 3)
            {
                v23 = 0;
                return v23;
            }
            v27 = v22;
            v36 = v22;
        }
    }
    else
    {
        v35 = 0;
    }
    if (v35 == 0 || ((long long)(((char)v26) & 4)) == 0 || v27 == 3)
    {
        if (v27 - 8 > 4)
        {
            v23 = 0;
            return v23;
        }
        else if ((((char)((int)v27)) & 1) != 0)
        {
            v23 = 0;
            return v23;
        }
        else
        {
            v26 = 0;
            while (true)
            {
                if (((int)*(v29 + v26)) - 48 > 9)
                {
                    v23 = 0;
                    return v23;
                }
            }
            v26 += 1;
            v36 >>= 1;
            v24 = 0;
            do
            {
                v13 = ((int)(((long long)*(v28 + v24 * 2 + 1)) + (((long long)*(v28 + v24 * 2)) * 5 - 240) * 2 - 48));
                v24 += 1;
            }
            while (v36 != v24);
            if (((long long)(v34 & 1)) != 0)
            {
                v4 = v13 - 1;
                v3 = v14;
                v2 = v15;
                v1 = v16;
                v22 = year.isra.0();
                if (((long long)v22) != 0)
                {
                    v23 = 0;
                    return v23;
                }
            }
            else
            {
                v22 = year.isra.0();
                if (((long long)v22) != 0)
                {
                    v4 = ((int)(((long long)v17) - 1));
                    v3 = v18;
                    v22 = ((int)v20);
                    v2 = v19;
                    v1 = v22;
                    v23 = 0;
                    return v23;
                }
            }
            if (((long long)(v34 & 1)) == 0 && ((long long)v22) != 0 || ((long long)(v34 & 1)) != 0 && ((long long)v22) != 0)
            {
                if (v35 != 0)
                {
                    v22 = ((long long)(((int)*(v35 + 1)) - 48));
                    if (((int)*(v35 + 1)) - 48 > 9)
                    {
                        v23 = 0;
                        return v23;
                    }
                    else
                    {
                        v26 = ((long long)*(v35 + 2));
                        if (((int)(((long long)*(v35 + 2)) - 48)) > 9)
                        {
                            v23 = 0;
                        }
                        else
                        {
                            tmp_14 = ((long long)(v26 + v22 * 10 - 48));
                            v22 = v26 + v22 * 10 - 48;
                            v0 = ((int)tmp_14);
                        }
                    }
                }
                else
                {
                    v0 = 0;
                    v22 = 0;
                }
                if (v35 == 0 || ((int)(((long long)*(v35 + 2)) - 48)) <= 9 && ((int)*(v35 + 1)) - 48 <= 9)
                {
                    v32 = ((long long)v1);
                    v30 = ((int)v3);
                    v27 = 0;
                    v31 = ((long long)v2);
                    v29 = ((int)v4);
                    v25 = ((long long)v5);
                    while (true)
                    {
                        v8 = v30;
                        v22 = reg_16<4>;
                        v6 = v32;
                        v7 = v31;
                        v9 = v29;
                        v10 = v25;
                        v11 = -1;
                        v12 = -1;
                        v22 = mktime(((int)&stack_base-152));
                        if (((int)v11) >= 0)
                        {
                            v25 = ((int)v5);
                            v29 = ((long long)v4);
                            v30 = ((long long)v3);
                            v31 = ((int)v2);
                            v32 = ((int)v1);
                            if ((v10 ^ v5 | v9 ^ v4 | v8 ^ v3 | v7 ^ v2 | v6 ^ v1 | v22 ^ v0) == 0)
                            {
                                v27 = ((long long)(v27 & 1));
                                v22 += v27;
                                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>))))
                                {
                                    v23 = 0;
                                    return v23;
                                    v33->field_0 = v22;
                                    v23 = 1;
                                    return v23;
                                }
                            }
                            else if (v0 != 60)
                            {
                                v23 = 0;
                                return v23;
                            }
                            else
                            {
                                v0 = 59;
                                v22 = 59;
                                v27 = 1;
                            }
                        }
                        else
                        {
                            v23 = 0;
                            return v23;
                        }
                    }
                }
            }
            return v23;
        }
    }
}
