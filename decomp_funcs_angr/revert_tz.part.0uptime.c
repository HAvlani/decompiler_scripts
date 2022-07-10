typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

int revert_tz.part.0()
{
    unsigned long long v1;  // rax
    struct_0 *v4;  // rbx
    struct_0 *v5;  // rbx
    unsigned long|unsigned int v7;  // r12d
    unsigned long long v8;  // r13

    v7 = ((int)v4->field_0);
    v4 = __errno_location();
    if (setenv_TZ() != 0)
    {
        v7 = ((long long)v5->field_0);
        v8 = 0;
        tzfree.part.0();
        v5->field_0 = v7;
        v1 = v8;
        return v1;
    }
    tzset();
    v8 = 1;
    tzfree.part.0();
    v5->field_0 = v7;
    v1 = v8;
    return v1;
}
