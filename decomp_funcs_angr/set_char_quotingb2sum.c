typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern <missing-type> default_quoting_options;

int set_char_quoting()
{
    BOT tmp_92;  // tmp #92
    BOT tmp_123;  // tmp #123
    unsigned long long v1;  // rcx
    unsigned long v2;  // rdx
    struct_0 *v3;  // rsi
    unsigned long v4;  // rsi
    unsigned long v5;  // rdi
    unsigned long long v6;  // rdi

    v1 = ((long long)(((int)v4) & 31));
    v3 = (v5 == 0? &default_quoting_options : v5) + v4 % 32 * 4 + 8;
    v6 = ((long long)v3->field_0);
    tmp_92 = v1;
    tmp_123 = ((long long)((((int)v2) ^ ((int)(v6 >> (tmp_92 & 31)))) & 1));
    v3->field_0 = ((int)(tmp_123 << (tmp_92 & 31))) ^ v3->field_0;
    return ((long long)(((int)(v6 >> (tmp_92 & 31))) & 1));
}
