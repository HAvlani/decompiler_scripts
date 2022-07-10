typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int dirchownmod()
{
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdc]
    unsigned int v10;  // edx
    struct_0 *v11;  // rbx
    struct_0 *v12;  // rbx
    struct_0 *v13;  // rbx
    unsigned long long v14;  // ebp
    unsigned int v15;  // esi
    unsigned int v16;  // edi
    unsigned int v17;  // r8d
    unsigned int v18;  // r9d
    unsigned long long v19;  // r12
    char v2;  // [bp-0xd8]
    unsigned int v20;  // cc_dep1
    unsigned int v3;  // [bp-0xc0]
    unsigned int v4;  // [bp-0xbc]
    unsigned int v5;  // [bp-0xb8]
    unsigned long v6;  // [bp+0x8]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long|unsigned int v9;  // rcx

    v0 = v10;
    if (v16 >= 0)
    {
        v7 = __fxstat(0x1, v16);
        if (v7 == 0)
        {
            v9 = ((long long)v3);
            if ((((short)v3) & 0xf000) != 0x4000)
            {
                v14 = 20;
                v12->field_0 = 20;
                v12 = __errno_location();
                close(v16);
                v13->field_0 = v14;
                v8 = v19;
                return v8;
            }
        }
    }
    v7 = __xstat(0x1, v15, ((int)&v2));
    if (v7 != 0)
    {
        v8 = v19;
        return v8;
    }
    else
    {
        v9 = ((int)v3);
        if ((((short)v3) & 0xf000) != 0x4000)
        {
            *(__errno_location() + None) = 20;
            v8 = v19;
            return v8;
        }
    }
    if ((((short)v3) & 0xf000) == 0x4000)
    {
        if (v16 < 0 || v7 == 0)
        {
            if (v7 == 0 || v16 >= 0)
            {
                if (v17 != -1 || v15 != -1)
                {
                    if (v17 != -1 || v4 != v15)
                    {
                        if (v15 != -1 || v5 != v17)
                        {
                            if (v4 != v15 || v5 != v17)
                            {
                                if (v16 < 0)
                                {
                                    v20 = ((int)v0);
                                    v1 = v9;
                                    if (v20 != -1)
                                    {
                                        v19 = lchown();
                                    }
                                    else
                                    {
                                        v19 = chown();
                                    }
                                    if (((int)v19) != 0)
                                    {
                                        v8 = v19;
                                        return v8;
                                    }
                                }
                                v1 = v9;
                                v7 = fchown(v16, v15, v17);
                            }
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        if (((long long)(v9 & 73)) != 0)
        {
            ((unsigned int)v10) = ((long long)(((int)v9) & 0xc00));
        }
    }
    if (...)
    {
        v10 = 0;
    }
    if (...)
    {
        if (((v9 ^ v18 | v10) & ((int)v6)) != 0)
        {
            if (!(v16 < 0))
            {
                v7 = fchmod(v16);
                if (v7 == 0)
                {
                    close(v16);
                    v8 = v19;
                    return v8;
                }
            }
            else if (v0 != -1)
            {
                lchmod();
                v8 = v19;
                return v8;
            }
            else
            {
                chmod();
                v8 = v19;
                return v8;
            }
        }
        else
        {
            if (v16 < 0)
            {
                v8 = v19;
                return v8;
            }
            close(v16);
            v8 = v19;
            return v8;
        }
    }
    if (...)
    {
        v14 = ((int)v11->field_0);
        v11 = __errno_location();
        close(v16);
        v13->field_0 = v14;
        v8 = v19;
        return v8;
    }
}
