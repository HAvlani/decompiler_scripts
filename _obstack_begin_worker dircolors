typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

int _obstack_begin_worker()
{
    BOT tmp_35;  // tmp #35
    unsigned long long v1[2];  // rax
    unsigned long long v3;  // rdx
    struct_0 *v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r12

    v4 = v7;
    if (v3 != 0)
    {
        v5 = v3;
        v8 = v3 - 1;
        v4->field_30 = v8;
        v4->field_0 = (v6 == 0? 4064 : v6);
        v1 = call_chunkfun();
        v4->field_8 = v1;
        if (v1 != 0)
        {
            tmp_35 = v4->field_0;
            v4->field_10 = 0 - v5 & v1 + v8 + 16;
            v4->field_18 = 0 - v5 & v1 + v8 + 16;
            v1[0] = tmp_35 + v1;
            v4->field_20 = tmp_35 + v1;
            v1[1] = 0;
            v4->field_50 = v4->field_50 & 249;
            return 1;
        }
        print_and_abort(); /* do not return */
    }
    v8 = 15;
    v5 = 16;
    v4->field_30 = v8;
    v4->field_0 = (v6 == 0? 4064 : v6);
    v1 = call_chunkfun();
    v4->field_8 = v1;
    if (v1 != 0)
    {
        tmp_35 = v4->field_0;
        v4->field_10 = 0 - v5 & v1 + v8 + 16;
        v4->field_18 = 0 - v5 & v1 + v8 + 16;
        v1[0] = tmp_35 + v1;
        v4->field_20 = tmp_35 + v1;
        v1[1] = 0;
        v4->field_50 = v4->field_50 & 249;
        return 1;
    }
    else
    {
        print_and_abort(); /* do not return */
    }
}
