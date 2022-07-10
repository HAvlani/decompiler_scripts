typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 extend_size;
extern struct_0 first_free_tab;
extern struct_0 increment_size;
extern struct_0 tab_list;
extern struct_0 tab_size;

int get_next_tab_column()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long|struct_0 * v3;  // rcx
    char *v4;  // rdx
    struct_0 *v5;  // rsi
    unsigned long v6;  // rdi
    unsigned long long v7;  // r8
    struct_0 *v8;  // r9

    v3 = tab_size;
    *(v4) = 0;
    v1 = v6;
    if (tab_size == 0)
    {
        v3 = v5->field_0;
        v8 = tab_list;
        if (first_free_tab <= v5->field_0)
        {
        }
        else
        {
            while (true)
            {
                v7 = *(v8 + v3 * 8);
                if (v6 >= *(v8 + (v3 << 3)))
                {
                    return v7;
                    v3 += 1;
                    v5->field_0 = v3;
                }
            }
        }
        v3 = extend_size;
        if (extend_size != 0)
        {
            v2 = v3 + v1 - ((long long)((0 CONCAT v1) % v3 >> 64));
            return v2;
        }
        else if (increment_size == 0)
        {
            *(v4) = 1;
            return increment_size;
        }
        else
        {
            v7 = ...;
            return v7;
        }
    }
    v2 = v3 + v1 - ((long long)((0 CONCAT v1) % v3 >> 64));
    return v2;
}
