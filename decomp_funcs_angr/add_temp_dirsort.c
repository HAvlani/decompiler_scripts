typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 temp_dir_alloc;
extern struct_0 temp_dir_count;
extern struct_0 temp_dirs;

int add_temp_dir()
{
    unsigned long long v1;  // rax
    struct_0 * v2;  // rdx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rdi
    struct_0 * v5;  // rdi

    v2 = temp_dir_count;
    v3 = v4;
    v5 = temp_dirs;
    if (temp_dir_count != temp_dir_alloc)
    {
        *(v5 + v2 * 8) = v3;
        temp_dir_count = v2 + 1;
        return v2 + 1;
    }
    v1 = x2nrealloc();
    v2 = temp_dir_count;
    temp_dirs = v1;
    v5 = v1;
    *(v5 + v2 * 8) = v3;
    temp_dir_count = v2 + 1;
    return v2 + 1;
}
