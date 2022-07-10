typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 dired_pos;

int push_current_dired_pos.part.0()
{
    BOT tmp_15;  // tmp #15
    struct_0 * v2;  // rdx
    unsigned long long v3[5];  // rbx
    unsigned long long v4[5];  // rdi

    v2 = v4[3];
    tmp_15 = v4[4];
    v3 = v4;
    if (tmp_15 - v2 > 7)
    {
        v2->field_0 = dired_pos;
        v3[3] = v3[3] + 8;
        return dired_pos;
    }
    _obstack_newchunk();
    v2 = v4[3];
    v2->field_0 = dired_pos;
    v3[3] = v3[3] + 8;
    return dired_pos;
}
