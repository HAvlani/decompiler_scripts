extern <missing-type> default_quoting_options;

int get_quoting_style()
{
    unsigned long v1;  // rdi

    return ((long long)*((v1 == 0? &default_quoting_options : v1)));
}
