typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 stdout;

int buffer_or_output()
{
    struct_0 *v3;  // rdx
    struct_0 *v4;  // rbx
    struct_0 *v5;  // rbp
    struct_0 *v6;  // rsi
    void *v7;  // rdi
    char *v8;  // rdi
    unsigned long long v9;  // r12

    if (v6->field_0 != 0)
    {
        v4 = v6;
        v5 = v3;
        v9 = strlen(v7);
        if (v3->field_0 <= v9)
        {
            return 1;
        }
        memcpy(v6->field_0, v7, v9 + 1);
        v4->field_0 = v4->field_0 + v9;
        v5->field_0 = v5->field_0 - v9;
        return 0;
    }
    fputs_unlocked(v8, stdout);
    return 0;
}
