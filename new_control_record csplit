typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[4];
    char field_1c;
    char padding_1d[1];
    char field_1e;
} struct_1;

extern struct_0 control_allocated.7640;
extern struct_0 control_used;
extern struct_0 controls;

int new_control_record()
{
    unsigned long long v1;  // rax
    struct_1 *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdi

    v1 = control_used;
    v4 = controls;
    if (control_used != control_allocated.7640)
    {
        control_used = v1 + 1;
        v2 = v1 * 96 + v4;
        v2->field_1e = 0;
        v2->field_10 = 0;
        v2->field_1c = 0;
        v2->field_8 = 0;
        v2->field_0 = 0;
        return v2;
    }
    v3 = xpalloc();
    controls = v3;
    v4 = v3;
    v1 = control_used;
    control_used = v1 + 1;
    v2 = v1 * 96 + v4;
    v2->field_1e = 0;
    v2->field_10 = 0;
    v2->field_1c = 0;
    v2->field_8 = 0;
    v2->field_0 = 0;
    return v2;
}
