typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_412a58;
extern <missing-type> speeds;

int string_to_baud()
{
    unsigned long long v1;  // rax
    struct_1 * v2;  // rbx
    unsigned long long v3;  // rbp
    char *v5;  // rdi

    v3 = 0;
    v2 = &g_412a58;
    while (true)
    {
        v1 = strcmp(v5, "0");
        if (v1 != 0)
        {
            "0" = v2->field_0;
            v2 += 24;
            v3 = ((int)v3) + 1;
            return -1;
        }
        return ((long long)*(&speeds + &stack_base+0 * 24 + 8));
    }
}
