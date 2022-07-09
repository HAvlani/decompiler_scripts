typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

int save_cwd()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v4;  // rdi

    v4->field_8 = 0;
    v1 = open_safer();
    v4->field_0 = v1;
    if (v1 >= 0)
    {
        return 0;
    }
    v2 = getcwd(0x0, 0x0);
    v4->field_8 = v2;
    return ((long long)(0 - ((int)(v2 == 0))));
}
