typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int renameatu()
{
    BOT tmp_45;  // tmp #45
    struct_0 * v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x169]
    char|unsigned long long|unsigned int v10;  // rdx
    unsigned long long v11;  // rbx
    char *v12;  // rsi
    unsigned int v13;  // edi
    unsigned int v14;  // r8d
    struct_0 * v15;  // r9
    unsigned long long v16;  // r10
    unsigned long long v17;  // r12
    unsigned int v18;  // r14d
    char v2;  // [bp-0x168]
    unsigned int v3;  // [bp-0x150]
    char v4;  // [bp-0xd8]
    unsigned int v5;  // [bp-0xc0]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    char *v9;  // rcx

    v18 = v10;
    v7 = renameat2();
    if (v7 < 0)
    {
        v15 = __errno_location();
        v7 = ((long long)v15->field_0);
        v10 = ((long long)(((int)v7) - 22 & -17));
        v10 = ((char)((((int)(v7 - 22)) & -17) != 0)) & ((char)(((int)v7) != 95));
        tmp_45 = rdx<8>;
        v16 = tmp_45;
        if (((long long)(((char)((((int)(v7 - 22)) & -17) != 0)) & ((char)(((int)v7) != 95)))) == 0)
        {
            if (v14 != 0)
            {
                if (v14 != 1)
                {
                    v15->field_0 = 95;
                    v8 = v17;
                    return v8;
                }
            }
            if (v14 == 1)
            {
                v0 = v15;
                v7 = __fxstatat(0x1, v18, ((int)v9), ((int)&v4), 0x100);
                v15 = v0;
                if (v7 != 0)
                {
                    if (!(v0->field_0 != 75))
                    {
                        v0->field_0 = 17;
                        v8 = v17;
                        return v8;
                    }
                    else if (v0->field_0 != 2)
                    {
                        v8 = v17;
                        return v8;
                    }
                    if (v0->field_0 == 2)
                    {
                        v16 = 1;
                    }
                }
                else
                {
                    v0->field_0 = 17;
                    v8 = v17;
                    return v8;
                }
            }
            if (v14 == 0 || v0->field_0 == 2 && v14 == 1 && v0->field_0 != 75 && v7 != 0)
            {
                v1 = v16;
                v0 = v15;
                v11 = strlen(v12);
                v7 = strlen(v9);
                if (v11 != 0)
                {
                    v15 = v0;
                    if (v7 != 0)
                    {
                        if (*(v12 + v11 + 1) != 47)
                        {
                            if (*(v9 + v7 + 1) != 47)
                            {
                                renameat(v13, ((int)v12), v18, ((int)v9));
                                v8 = v17;
                                return v8;
                            }
                        }
                        if (*(v12 + v11 + 1) == 47 || *(v9 + v7 + 1) == 47)
                        {
                            v1 = v1;
                            v0 = v15;
                            v7 = __fxstatat(0x1, v13, ((int)v12), ((int)&v2), 0x100);
                            if (v7 != 0)
                            {
                                v8 = v17;
                                return v8;
                            }
                            else if (!(((long long)v1) != 0))
                            {
                                v0 = v0;
                                v7 = __fxstatat(0x1, v18, ((int)v9), ((int)&v4), 0x100);
                                if (v7 != 0)
                                {
                                    if (v0->field_0 != 2)
                                    {
                                        v8 = v17;
                                        return v8;
                                    }
                                    if ((((short)v3) & 0xf000) != 0x4000)
                                    {
                                        v8 = v17;
                                        return v8;
                                    }
                                    else
                                    {
                                        renameat(v13, ((int)v12), v18, ((int)v9));
                                        v8 = v17;
                                        return v8;
                                    }
                                }
                                if ((((short)v5) & 0xf000) != 0x4000)
                                {
                                    v0->field_0 = 20;
                                    v8 = v17;
                                    return v8;
                                }
                                else
                                {
                                    if ((((short)v3) & 0xf000) == 0x4000)
                                    {
                                        renameat(v13, ((int)v12), v18, ((int)v9));
                                        v8 = v17;
                                        return v8;
                                    }
                                    else
                                    {
                                        v0->field_0 = 21;
                                        v8 = v17;
                                        return v8;
                                    }
                                }
                            }
                            else if ((((short)v3) & 0xf000) == 0x4000)
                            {
                                renameat(v13, ((int)v12), v18, ((int)v9));
                                v8 = v17;
                                return v8;
                            }
                            else
                            {
                                v0->field_0 = 2;
                                v8 = v17;
                                return v8;
                            }
                        }
                    }
                    renameat(v13, ((int)v12), v18, ((int)v9));
                    v8 = v17;
                    return v8;
                }
                renameat(v13, ((int)v12), v18, ((int)v9));
                v8 = v17;
                return v8;
            }
        }
        v8 = v17;
        return v8;
    }
    v8 = v17;
    return v8;
}
