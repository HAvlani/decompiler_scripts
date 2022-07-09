typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

extern struct_0 dir_mode_bits;
extern struct_0 group_id;
extern struct_0 owner_id;

int process_dir()
{
    BOT tmp_15;  // tmp #15
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    struct_1 *v6;  // rdx

    v3 = 0;
    v2 = ((long long)group_id);
    v1 = ((long long)owner_id);
    v0 = ((long long)dir_mode_bits);
    tmp_15 = ((long long)(make_dir_parents() ^ 1));
    if (!(((long long)tmp_15) == 0))
    {
        return ((long long)tmp_15);
    }
    else if (v6->field_28 != 0)
    {
        *(__errno_location() + None) = 95;
        return ((long long)tmp_15);
    }
    else
    {
        return ((long long)tmp_15);
    }
}
