typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int re_node_set_remove_at.isra.0.part.0()
{
    struct_1 *v1;  // rax
    struct_1 * v2;  // rdx
    struct_1 *v3;  // rsi
    struct_1 *v4;  // rdi

    if (v2 < v4->field_0)
    {
        v1 = v3->field_0;
        do
        {
            *(v1 + v2 * 8) = *(v1 + v2 * 8 + 8);
            v2 += 1;
        }
        while (v2 < v4->field_0);
        return v3->field_0;
    }
    return v3->field_0;
}