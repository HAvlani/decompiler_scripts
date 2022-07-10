typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int add_exclude_fp()
{
    BOT tmp_17;  // tmp #17
    BOT tmp_6;  // tmp #6
    unsigned long long|unsigned int v0;  // [bp-0x78]
    struct_1 *v1;  // [bp-0x70]
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    unsigned long long|unsigned int v12;  // ebx
    char v13;  // bl
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rsi
    struct_1 *v16;  // rdi
    unsigned long v17;  // r8
    unsigned int v18;  // r9d
    unsigned long long v19;  // r12
    unsigned int v2;  // [bp-0x5c]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    struct_4 *v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    struct_3 *|unsigned long long|unsigned long long [2] v7;  // rax
    unsigned long long v8;  // rcx
    void *v9;  // rdx

    v22 = 0;
    v20 = 0;
    v19 = v15;
    v1 = v16;
    v5 = 0;
    while (true)
    {
        v18 = (int)getc(v9);
        if (((int)v0) == -1)
        {
            break;
        }
        if (v5 == v22)
        {
            v0 = v18;
            v20 = (long long)xpalloc();
        }
        *(v20 + v22) = ((char)v0);
        v22 += 1;
    }
    v2 = ferror(((int)v9));
    v12 = v2;
    v4 = 0;
    v3 = __errno_location();
    if (v12 != 0)
    {
        tmp_17 = ((long long)v3->field_0);
        v2 = v3->field_0;
        v4 = 0 - ((int)(((int)tmp_17) != 0));
    }
    v21 = (long long)xirealloc();
    *(v21 + v22) = ((char)v17);
    if (v22 == 0)
    {
        v7 = xmalloc();
        v10 = v16->field_8;
        v7[1] = v21;
        v7[0] = v10;
        v16->field_8 = v7;
        v3->field_0 = v2;
        return ((long long)v4);
    }
    v11 = 0;
    v13 = ((char)(*(v21 + v22 + 1) != ((char)v17)));
    v7 = xmalloc();
    v10 = v16->field_8;
    v12 = rbx<8> + v22 + v21;
    v7[1] = v21;
    v7[0] = v10;
    v16->field_8 = v7;
    if (v21 >= v12)
    {
        v3->field_0 = v2;
        return ((long long)v4);
    }
    else
    {
        v15 = v21;
        do
        {
            v7 = ((long long)*(v21));
            v22 = v21;
            v21 += 1;
            tmp_6 = v7;
            if (tmp_6 == ((char)v17))
            {
                v0 = v15;
                v7 = __ctype_b_loc();
                v14 = v0;
                v8 = v7->field_0;
                if (((long long)(*(v7->field_0 + (v17 << 1)) & 0x2000)) != 0)
                {
                    if (v0 == v21 - 1)
                    {
                        /* goto 4223341; */
                    }
                    else
                    {
                        while (true)
                        {
                            if (((long long)(*(v8 + (((long long)*(v22 + 1)) << 1) + 1) & 32)) != 0)
                            {
                                v22 -= 1;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (((long long)(*(v8 + (((long long)*(v22 + 1)) << 1) + 1) & 32)) == 0)
                        {
                            v8 = v18;
                            v10 = ((long long)v18);
                            *(r15<8> + None) = 0;
                            v16 = v19;
                            *(&stack_base-112)();
                        }
                        else if (((long long)(*(v8 + (((long long)*(v22 + 1)) << 1) + 1) & 32)) != 0)
                        {
                            v15 = v21;
                        }
                    }
                }
                if (((long long)(*(v7->field_0 + (v17 << 1)) & 0x2000)) == 0 || v0 != v21 - 1)
                {
                    v8 = v18;
                    v10 = ((long long)v18);
                    *(r15<8> + None) = 0;
                    v16 = v19;
                    *(&stack_base-112)();
                }
                v15 = v21;
            }
        }
        while (v12 != v21);
        v3->field_0 = v2;
        return ((long long)v4);
    }
}
