extern <missing-type> default_quoting_options;

int set_quoting_flags()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // esi
    unsigned long v3;  // rdi

    v1 = ((long long)*((v3 == 0? &default_quoting_options : v3) + 4));
    *((v3 == 0? &default_quoting_options : v3) + 4) = v2;
    return v1;
}
