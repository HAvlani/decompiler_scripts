typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
} struct_0;

int chown_failure_ok()
{
    struct_1 * v1;  // rax
    struct_0 *v2;  // rdi

    v1 = __errno_location();
    v1 = ((char)(v1->field_0 == 1)) | ((char)(v1->field_0 == 22));
    if (((long long)(((char)(v1->field_0 == 1)) | ((char)(v1->field_0 == 22)))) != 0)
    {
        v1 = ((long long)(((int)v2->field_1a) ^ 1));
        return v1;
    }
    return v1;
}
