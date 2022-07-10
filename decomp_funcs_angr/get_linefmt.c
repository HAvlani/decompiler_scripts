typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_0;

extern char g_415d10;
extern struct_2 in_column;
extern <missing-type> out_column;
extern char uniform;
extern struct_0 *word_limit;
extern unsigned long long wptr;

int get_line()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_49;  // tmp #49
    BOT tmp_34;  // tmp #34
    unsigned int v0;  // [bp-0x44]
    struct_1 *v1;  // [bp-0x40]
    char v10;  // al
    unsigned long long v11;  // rax
    unsigned long long|char * v14;  // rax
    char *v15;  // rax
    unsigned long long v17;  // rax
    struct_1 * v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long v2;  // [bp-0x30]
    unsigned long|char * v20;  // rbx
    unsigned long long v21[3];  // rbp
    unsigned long long v22;  // rsi
    unsigned long long v23[3];  // rdi
    unsigned long|unsigned long long v24;  // r12
    struct_0 *|unsigned long v25;  // r13
    unsigned long|unsigned int v26;  // r14
    unsigned long v27;  // r15
    unsigned long long|unsigned int v28;  // r15
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    unsigned long v6;  // [bp-0x8]
    struct_0 * v8;  // rax

    v6 = v27;
    v28 = v22;
    v5 = v26;
    v4 = v25;
    v3 = v24;
    v21 = v23;
    v2 = v20;
    v1 = __ctype_b_loc();
    while (true)
    {
        v14 = wptr;
        v18->field_0 = wptr;
        do
        {
            v19 = v14 + 1;
            *(v14) = v28;
            v15 = v21[1];
            wptr = v19;
            if (v15 < v21[2])
            {
                v21[1] = v23[1] + 1;
                v28 = ((long long)*(v15));
                v14 = wptr;
            }
            else
            {
                v28 = __uflow();
                v14 = wptr;
                if (((int)v28) == -1)
                {
                    break;
                }
            }
            if (((int)r15<8>) == 32 && ((int)r15<8>) > 13)
            {
                break;
            }
            if (v14 == 4288776 || rax<8> == 4288776 && ((int)r15<8>) != 32 && ((int)r15<8>) > 13)
            {
                set_other_indent();
                flush_paragraph();
                v14 = wptr;
                /* goto 4207778; */
            }
        }
        while (((int)v28) <= 8);
        v25 = word_limit;
        v24 = *(word_limit);
        tmp_3 = v14 - *(word_limit);
        *(word_limit + 8) = ((int)(v14 - *(word_limit)));
        v0 = in_column + ((int)tmp_3);
        v20 = v24 + tmp_3 - 1;
        in_column = in_column + ((int)tmp_3);
        v25->field_10 = ((char)(...));
        if (v24 >= v20)
        {
            v26 = ((long long)*(*(word_limit) + tmp_3 + 1));
        }
        else
        {
            while (true)
            {
                v26 = ((long long)*(v20));
                v14 = strchr(")]\'\"", ((int)*(v20)));
                if (v14 == 0)
                {
                    break;
                }
                v14 = v20 - 1;
                if (*(word_limit) != v20 - 1)
                {
                    v20 = v14;
                }
                else
                {
                    v26 = ((int)*(v20 + 0x1));
                    break;
                }
            }
        }
        v17 = strchr(".?!", v26);
        v10 = ((char)(v17 != 0));
        v11 = ((long long)(((int)v25->field_10) & -3 | ((int)rax<8>) * 2));
        tmp_49 = v11;
        v25->field_10 = tmp_49;
        v28 = get_space();
        v8 = word_limit;
        *(word_limit + 12) = in_column - v0;
        if (v28 != -1)
        {
            if (((long long)(*(word_limit + 16) & 2)) == 0)
            {
                v19 = 0;
            }
            else if (((long long)(((char)(1 < ((int)v19))) | ((char)(v28 == 10)))) == 0)
            {
                *(word_limit + 16) = ((char)(((int)*(word_limit + 16)) & -9));
            }
            if (((long long)(*(word_limit + 16) & 2)) == 0 || ((long long)(((char)(1 < ((int)v19))) | ((char)(v28 == 10)))) != 0)
            {
                v19 = ((long long)(((int)v8->field_10) & -9 | ((int)v19) * 8));
                tmp_34 = v19;
                v8->field_10 = tmp_34;
            }
            if (uniform == 0 && v8 != 4283664 && (((long long)(((char)(1 < ((int)v19))) | ((char)(v28 == 10)))) == 0 || v28 != 10) && (((long long)(*(word_limit + 16) & 2)) != 0 || v28 != 10))
            {
                v18 = v8 + 40;
                word_limit = v8 + 40;
            }
        }
        else
        {
            v8->field_10 = v8->field_10 | 8;
        }
        if (v28 == -1 || uniform != 0 || ((long long)(*(word_limit + 16) & 2)) == 0 && v28 == 10 || v28 == 10 && ((long long)(((char)(1 < ((int)v19))) | ((char)(v28 == 10)))) != 0)
        {
            v8->field_c = ((int)(((long long)(v8->field_10 & 8)) != 0)) + 1;
        }
        if (v8 == 4283664)
        {
            set_other_indent();
            flush_paragraph();
            v8 = word_limit;
        }
        if (v28 == -1 || v8 == 4283664 || uniform != 0 || ((long long)(*(word_limit + 16) & 2)) == 0 && v28 == 10 || v28 == 10 && ((long long)(((char)(1 < ((int)v19))) | ((char)(v28 == 10)))) != 0)
        {
            v18 = v8 + 40;
            word_limit = v8 + 40;
        }
    }
}
