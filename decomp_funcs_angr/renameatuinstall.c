typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int renameatu()
{
    BOT tmp_45;  // tmp #45
    struct_0 * v0;  // [bp-0x178]
    unsigned long long|char v1;  // [bp-0x169]
    char *v10;  // rsi
    unsigned int v11;  // edi
    unsigned int v12;  // r8d
    struct_0 * v13;  // r9
    unsigned long long v14;  // r10
    unsigned long v15;  // r12
    unsigned int v16;  // r14d
    unsigned int v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0xc0]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    char *v7;  // rcx
    unsigned long long|unsigned int v8;  // dl
    unsigned long long v9;  // rbx

    v16 = v8;
    v5 = renameat2();
    if (v5 < 0)
    {
        v13 = __errno_location();
        v5 = ((long long)v13->field_0);
        v8 = ((long long)(((int)v5) - 22 & -17));
        v8 = ((char)((((int)(v5 - 22)) & -17) != 0)) & ((char)(((int)v5) != 95));
        tmp_45 = rdx<8>;
        v14 = tmp_45;
        if (((long long)(((char)((((int)(v5 - 22)) & -17) != 0)) & ((char)(((int)v5) != 95)))) == 0)
        {
            if (v12 != 0)
            {
                if (v12 != 1)
                {
                    v13->field_0 = 95;
                    v6 = v15;
                    return v6;
                }
            }
            if (v12 == 1)
            {
                v0 = v13;
                v5 = __fxstatat(0x1);
                v13 = v0;
                if (v5 != 0)
                {
                    if (!(v0->field_0 != 75))
                    {
                        v0->field_0 = 17;
                        v6 = v15;
                        return v6;
                    }
                    else if (v0->field_0 != 2)
                    {
                        v6 = v15;
                        return v6;
                    }
                    if (v0->field_0 == 2)
                    {
                        v14 = 1;
                    }
                }
                else
                {
                    v0->field_0 = 17;
                    v6 = v15;
                    return v6;
                }
            }
            if (v12 == 0 || v12 == 1 && v0->field_0 == 2 && v5 != 0 && v0->field_0 != 75)
            {
                v1 = v14;
                v0 = v13;
                v9 = strlen(v10);
                v5 = strlen(v7);
                if (v9 != 0)
                {
                    v13 = v0;
                    if (v5 != 0)
                    {
                        if (*(v10 + v9 + 1) != 47)
                        {
                            if (*(v7 + v5 + 1) != 47)
                            {
                                renameat(v11, ((int)v10), v16, ((int)v7));
                                v6 = v15;
                                return v6;
                            }
                        }
                        if (*(v10 + v9 + 1) == 47 || *(v7 + v5 + 1) == 47)
                        {
                            v1 = v1;
                            v0 = v13;
                            v5 = __fxstatat(0x1);
                            if (v5 != 0)
                            {
                                v6 = v15;
                                return v6;
                            }
                            else if (!(((long long)v1) != 0))
                            {
                                v0 = v0;
                                v5 = __fxstatat(0x1);
                                if (v5 != 0)
                                {
                                    if (v0->field_0 != 2)
                                    {
                                        v6 = v15;
                                        return v6;
                                    }
                                    if ((((short)v2) & 0xf000) != 0x4000)
                                    {
                                        v6 = v15;
                                        return v6;
                                    }
                                    else
                                    {
                                        renameat(v11, ((int)v10), v16, ((int)v7));
                                        v6 = v15;
                                        return v6;
                                    }
                                }
                                if ((((short)v3) & 0xf000) != 0x4000)
                                {
                                    v0->field_0 = 20;
                                    v6 = v15;
                                    return v6;
                                }
                                else
                                {
                                    if ((((short)v2) & 0xf000) == 0x4000)
                                    {
                                        renameat(v11, ((int)v10), v16, ((int)v7));
                                        v6 = v15;
                                        return v6;
                                    }
                                    else
                                    {
                                        v0->field_0 = 21;
                                        v6 = v15;
                                        return v6;
                                    }
                                }
                            }
                            else if ((((short)v2) & 0xf000) == 0x4000)
                            {
                                renameat(v11, ((int)v10), v16, ((int)v7));
                                v6 = v15;
                                return v6;
                            }
                            else
                            {
                                v0->field_0 = 2;
                                v6 = v15;
                                return v6;
                            }
                        }
                    }
                    renameat(v11, ((int)v10), v16, ((int)v7));
                    v6 = v15;
                    return v6;
                }
                renameat(v11, ((int)v10), v16, ((int)v7));
                v6 = v15;
                return v6;
            }
        }
        v6 = v15;
        return v6;
    }
    v6 = v15;
    return v6;
}
