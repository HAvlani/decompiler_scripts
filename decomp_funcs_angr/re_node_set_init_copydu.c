typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int re_node_set_init_copy()
{
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    struct_0 *v4;  // rbx
    unsigned long long [3]|void * v5;  // rsi
    struct_0 *v6;  // rdi
    void *v7;  // rdi
    unsigned long v8;  // r12

    v3 = v5[1];
    v4 = v6;
    v6->field_8 = v5[1];
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v6->field_0 = v5[1];
        v8 = v3 * 8;
        v6->field_10 = v6;
        v6 = malloc(v3 * 8);
        if (v6 != 0)
        {
            v5 = v5[2];
            memcpy(v7, v5, v8);
            v2 = 0;
            return v2;
        }
        v4->field_8 = 0;
        v2 = 12;
        v4->field_0 = 0;
        return v2;
    }
    v6->field_10 = 0;
    v6->field_0 = 0;
    return 0;
}
