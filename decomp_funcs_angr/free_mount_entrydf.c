typedef struct struct_0 {
    char padding_0[40];
    char field_28;
} struct_0;

int free_mount_entry()
{
    struct_0 *v5;  // rdi

    rpl_free();
    rpl_free();
    rpl_free();
    if (((long long)(v5->field_28 & 4)) == 0)
    {
    }
    else
    {
        rpl_free();
    }
}
