typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 block_size_opts;

int human_options()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    struct_1 *|unsigned long long v4;  // rdx
    char [2] v5;  // rbx
    struct_1 *v6;  // rbp
    struct_0 *v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long|unsigned int v9;  // r12b

    v6 = v4;
    v5 = v8;
    if (v8 == 0)
    {
        v5 = getenv("BLOCK_SIZE");
        if (v5 == 0)
        {
            v5 = getenv("BLOCKSIZE");
            if (v5 == 0)
            {
                v2 = getenv("POSIXLY_CORRECT");
                if (v2 != 0)
                {
                    v4->field_0 = 0x200;
                    v2 = 0;
                    v7->field_0 = 0;
                    return v2;
                }
                v4->field_0 = 0x400;
                v7->field_0 = 0;
                return v2;
            }
        }
    }
    if (v5 != 0 || v5 != 0 || v8 != 0)
    {
        v9 = 0;
        if (v5[0] == 39)
        {
            v5 += 1;
            v9 = 4;
        }
        v3 = argmatch();
        if (((int)v3) >= 0)
        {
            v4->field_0 = 1;
            v9 = ((int)(((int)v9) | *(block_size_opts + v3 * 4)));
            v2 = 0;
            v7->field_0 = v9;
            return v2;
        }
        v2 = xstrtoumax();
        if (((int)v2) == 0)
        {
            if ((((long long)v5[0]) - 48 & 255) <= 9)
            {
            }
            else
            {
                while (true)
                {
                    if (v0 != rbx<8>)
                    {
                        v8 = ((long long)*(rbx<8> + 1));
                        v5 = rbx<8> + 1;
                        if ((v8 - 48 & 255) <= 9)
                        {
                            break;
                        }
                    }
                    else
                    {
                        if (*(v0 + 1) != 66)
                        {
                            v9 |= 128;
                        }
                        else
                        {
                            v9 = ((int)(((int)v9) | 384));
                            if (*(v0 + 2) != 105)
                            {
                                break;
                            }
                        }
                        v9 = ((long long)(v9 | 32));
                        break;
                    }
                }
            }
            v4 = v4->field_0;
            v7->field_0 = v9;
        }
        else
        {
            v7->field_0 = 0;
            v4 = v4->field_0;
        }
        if (v4 != 0)
        {
            return v2;
        }
        else
        {
            v6->field_0 = ((long long)(((int)(0 - ((long long)(getenv("POSIXLY_CORRECT") < 1)))) & 0x200)) + 0x200;
            v2 = 4;
            return v2;
        }
    }
}
