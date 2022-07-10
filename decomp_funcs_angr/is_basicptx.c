extern struct_0 is_basic_table;

int is_basic()
{
    BOT tmp_43;  // tmp #43
    BOT tmp_42;  // tmp #42
    char v1;  // al
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi

    v2 = v3;
    v1 = ((char)v3) % 32;
    tmp_43 = rax<8>;
    tmp_42 = ((int)tmp_43);
    return ((long long)(((int)(((long long)*(is_basic_table + ((long long)(tmp_42 & 7)) * 4)) >> (((char)v3) & 31))) & 1));
}
