typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
    char padding_11[3];
    unsigned int field_14;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[24];
    unsigned long long field_40;
} struct_2;

extern struct_0 first_indent;
extern <missing-type> g_40c148;
extern struct_0 goal_width;
extern struct_0 last_line_length;
extern struct_0 max_width;
extern struct_0 other_indent;
extern <missing-type> unused_word_type;
extern struct_1 *word_limit;

int fmt_paragraph()
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v10;  // r12
    unsigned int v11;  // r13
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v2;  // rax
    unsigned long long|unsigned int v3;  // rax
    struct_2 * v4;  // rcx
    struct_2 * v5;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r10
    unsigned long long v9;  // r11

    v4 = word_limit - 40;
    v3 = ((int)*(word_limit + 8));
    *(word_limit + 24) = 0;
    *(word_limit + 8) = max_width;
    v0 = v3;
    if (word_limit - 40 >= 4243744)
    {
        v11 = ((int)other_indent);
        v10 = ((int)first_indent);
        v8 = ((long long)goal_width);
        v9 = ((long long)last_line_length);
        do
        {
            v5 = v4;
            v6 = 9223372036854775807;
            v13 = ((long long)((v4 == &unused_word_type? ((int)v10) : ((int)r13<8>)) + v4->field_8));
            do
            {
                v5 += 40;
                if (word_limit != v5)
                {
                    v2 = ((long long)(((long long)(v8 - v13)) * 10)) * ((long long)(((long long)(v8 - v13)) * 10));
                    if (word_limit != v5->field_20)
                    {
                        v2 += ((long long)(((long long)(((int)v13) - v5->field_14)) * 10)) * ((long long)(((long long)(((int)v13) - v5->field_14)) * 10)) >> 1;
                    }
                }
                else
                {
                    v2 = 0;
                }
                v3 = v2 + v5->field_18;
                if (v4 == 4243744 && ((int)last_line_length) > 0)
                {
                    v3 += ((long long)(((long long)(v13 - v9)) * 10)) * ((long long)(((long long)(v13 - v9)) * 10)) >> 1;
                }
                if (rax<8> < v6)
                {
                    v4->field_20 = v5;
                    v6 = rax<8>;
                    v4->field_14 = ((int)v13);
                }
                if (word_limit == v5)
                {
                    break;
                }
                v13 = ((long long)(((int)v13) + v5->field_8 + *(v5 + 0x1c)));
            }
            while (max_width > ((int)v13));
            v12 = 4900;
            if (v4 > 4243744)
            {
                if (((long long)(v4->field_18 & 2)) != 0)
                {
                    v12 = ...;
                }
                else
                {
                    v12 = 3300;
                    if (((long long)(*(word_limit - 40 + 24) & 4)) == 0)
                    {
                        v12 = 4900;
                        if (((long long)(v4->field_40 & 8)) != 0 && v4 > 4243784)
                        {
                            v12 = ((long long)((0 CONCAT 40000) % (((long long)v4->field_20) + 2))) + 4900;
                        }
                    }
                }
            }
            v7 = v6 + v12;
            v4 -= 40;
            v4->field_40 = v7;
        }
        while (v4 >= 4243744);
        *(word_limit + 8) = v0;
        return ((long long)v0);
    }
    *(word_limit + 8) = v0;
    return ((long long)v0);
}
