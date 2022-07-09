typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned long long g_40c140[5];
extern char parabuf;
extern struct_0 stdout;
extern unsigned int unused_word_type;
extern struct_0 word_limit;
extern struct_0 wptr;

int flush_paragraph()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long long v12[5];  // rdi
    unsigned long long v13;  // r12
    struct_0 * v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long [5] v6;  // rdx
    unsigned long long [5]|struct_0 *|unsigned long long v7;  // rbp
    unsigned long long v8;  // rbp
    struct_0 *v9;  // rsi

    if (word_limit != 4243744)
    {
        fmt_paragraph();
        v6 = g_40c140;
        if (word_limit != g_40c140)
        {
            v10 = *(g_40c140 + 24);
            v7 = word_limit;
            v1 = 9223372036854775807;
            do
            {
                v12 = v6;
                v6 = v6[4];
                tmp_12 = v10;
                v10 = v6[3];
                v3 = tmp_12 - v6[3];
                if (tmp_12 - v6[3] < v1)
                {
                    v1 = v3;
                    v7 = v12;
                }
                v1 = (rax<8> <= 9223372036854775798? rax<8> + 9 : rax<8>);
            }
            while (word_limit != v6);
        }
        else
        {
            v7 = word_limit;
        }
        put_paragraph();
        __memmove_chk(&parabuf, ((int)v7->field_0), ((int)(wptr - v7->field_0)), 0x1388);
        v5 = v7->field_0;
        v11 = v7->field_0 - &parabuf;
        wptr = wptr - (v7->field_0 - &parabuf);
        v4 = 0 - v11;
        if (word_limit >= v7)
        {
            v2 = v7;
            while (true)
            {
                v5 += v4;
                v2 += 40;
                *(v2 + 0x28) = v5;
                if (v2 > word_limit)
                {
                    break;
                }
                v5 = v2->field_0;
            }
            v9 = v7;
            v8 = v7 - &unused_word_type;
            v13 = word_limit - v8;
            word_limit = v13;
            return __memmove_chk(&unused_word_type, v9, ((int)(word_limit + 40)), 0x9c40);
        }
        v9 = v7;
        v8 = v7 - &unused_word_type;
        v13 = word_limit - v8;
        word_limit = v13;
        return __memmove_chk(&unused_word_type, v9, ((int)(word_limit + 40)), 0x9c40);
    }
    wptr = &parabuf;
    return fwrite_unlocked(&parabuf, 0x1, wptr - &parabuf, stdout);
}
