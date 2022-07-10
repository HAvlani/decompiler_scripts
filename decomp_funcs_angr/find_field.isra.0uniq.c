typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

extern struct_1 skip_chars;
extern struct_1 skip_fields;

int find_field.isra.0()
{
    unsigned long long v1;  // rax
    struct_1 *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbp
    struct_0 *|unsigned long long v7;  // rsi
    unsigned long v8;  // rdi

    v6 = v7;
    v5 = v8 - 1;
    if (!(skip_fields != 0))
    {
        v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
        return v3;
    }
    else if (v8 - 1 != 0)
    {
        v2 = __ctype_b_loc();
        v7 = v2->field_0;
        v4 = ((long long)*(v2->field_0 + ((long long)*(v6)) * 2));
        v5 = ((long long)*(v6));
        v1 = 0;
        while (true)
        {
            if (((long long)(v4 & 1)) == 0 && v5 != 10)
            {
                if (v8 - 1 > v1)
                {
                    while (true)
                    {
                        if (((long long)(v4 & 1)) == 0 && v5 != 10)
                        {
                            v1 += 1;
                            if (v1 != v8 - 1)
                            {
                                v5 = ((long long)*(v6 + v1));
                                v4 = ((long long)*(v7 + ((long long)*(v6 + v1)) * 2));
                                v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
                                return v3;
                            }
                        }
                        if (v8 - 1 > v1 && (v5 == 10 || ((long long)(v4 & 1)) != 0))
                        {
                            v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
                            return v3;
                            v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
                            return v3;
                        }
                    }
                }
                v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
                return v3;
            }
            if (v5 == 10 || ((long long)(v4 & 1)) != 0)
            {
                v1 += 1;
                if (v8 - 1 <= v1)
                {
                    v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
                    return v3;
                }
                v5 = ((long long)*(v6 + v1));
                v4 = ((long long)*(v7 + ((long long)*(v6 + v1)) * 2));
            }
        }
    }
    else
    {
        v3 = v1 + (skip_chars <= v5? skip_chars : v5) + v6;
        return v3;
    }
}
