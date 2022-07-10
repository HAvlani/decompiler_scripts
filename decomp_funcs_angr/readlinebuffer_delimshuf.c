typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

typedef struct struct_3 {
    char field_0;
    char padding_1[15];
    unsigned long long field_10;
} struct_3;

typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_2;

int readlinebuffer_delim()
{
    BOT tmp_44;  // tmp #44
    BOT tmp_7;  // tmp #7
    unsigned long|char v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v10[3];  // rdi
    unsigned long long v11;  // r11
    char * v12;  // r12
    struct_1 * v13;  // r15
    char *|struct_3 * v3;  // rax
    struct_2 * v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long|unsigned int v7;  // rbx
    struct_0 *v8;  // rbp
    struct_0 *v9;  // rsi

    v13 = v10[2];
    tmp_44 = v10[0];
    v1 = ((int)v6);
    v5 = tmp_44 + v13;
    if (((long long)(v9->field_0 & 16)) == 0)
    {
        v8 = v9;
        v12 = v10[2];
        while (true)
        {
            v3 = v8->field_8;
            if (v8->field_8 < v8->field_10)
            {
                v8->field_8 = v9->field_8 + 1;
                v7 = ((long long)*(v3));
            }
            else
            {
                v0 = v5;
                v7 = __uflow(((int)v8));
                if (((int)v7) == -1)
                {
                    if (v13 == v12)
                    {
                        return 0;
                    }
                    else if (((long long)(v8->field_0 & 32)) != 0)
                    {
                        return 0;
                    }
                    else if (*(v12 + 0x1) != v6)
                    {
                        v7 = ((int)v6);
                        if (v12 == v0)
                        {
                            v11 = ((long long)v6);
                            /* goto 4210768; */
                        }
                        else
                        {
                            v4 = v12 + 1;
                            *(v12) = ((char)v1);
                            v4->field_8 = v4 - v13;
                            return v10;
                        }
                    }
                    else
                    {
                        v4 = v12;
                        v4->field_8 = v4 - v13;
                        return v10;
                    }
                }
            }
            if (v8->field_8 < v8->field_10 || ((int)v7) != -1)
            {
                v11 = rbx<8>;
                if (v12 != v5)
                {
                    v3 = v12;
                    /* goto 4210678; */
                }
            }
            if (((int)v7) == -1 && ((long long)(v8->field_0 & 32)) == 0 && *(v12 + 0x1) != v6 && v8->field_8 >= v8->field_10 && v13 != v12 && v12 == v0 || (v8->field_8 < v8->field_10 || ((int)v7) != -1) && v12 == v5)
            {
                v0 = v11;
                tmp_7 = v13->field_0;
                v13 = (long long)xpalloc();
                v3 = v13 + v10[0];
                *(v4 + 0x10) = v13;
                v5 = tmp_7 + v13;
            }
            if (...)
            {
                v3->field_0 = r11b<1>;
                v12 = v3 + 1;
                v4 = v12;
                v4->field_8 = v4 - v13;
                return v10;
            }
        }
    }
    return 0;
}
